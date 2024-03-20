<div id="top"></div>

<br />
<div align="center">
  <a href="https://github.com/UE-ATUM/Plugin">
    <img src="Resources/Icon128.png" alt="Logo" width="128" height="128">
  </a>

<h3 align="center">ATUM</h3>
  <p align="center">Harnessing the power of ML inside UE</p>
</div>

<div align="justify">

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url] &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

</div>

<details open>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-plugin">About the Plugin</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#license">License</a></li>
  </ol>
</details>

<div id="about-the-plugin"></div>

## About the Plugin

ATUM is an _experimental_ plugin which enables developers to use machine learning inside Unreal Engine's environment.
It is currently the only solution which does not force the user to integrate Python into their workflow.

With ATUM you can:
* Design neural networks inside the editor
* Perform operations using tensors
* Save & load your models to and from files
* Create custom layers, optimisers and tensors
* Use every feature in both C++ and Blueprints


<p align="right">(<a href="#top">back to top</a>)</p>

<div id="getting-started"></div>

## Getting Started

_In order for this plugin to work, additional files which are not present in this repository are required._
_Those files can be accessed from the official [PyTorch website](https://pytorch.org/get-started/locally/)._

<div id="prerequisites"></div>

### Prerequisites

* OS: Windows - 64 bit
* UE: version 5.2+
* GPU support is currently CUDA-only

<div id="installation"></div>

### Installation

1. Download libtorch v2.1.0 (Release + Shared Dependencies) ([cpu](https://download.pytorch.org/libtorch/cpu/libtorch-win-shared-with-deps-2.1.0%2Bcpu.zip) | [gpu](https://download.pytorch.org/libtorch/cu118/libtorch-static-with-deps-2.1.0%2Bcu118.zip))  
2. Extract the `include` and `lib` folders
3. In your UE project, create a folder `Plugins` if it doesn't exist
4. Inside it create another folder called `Atum` if it doesn't exist
5. Clone this repository and move the files inside the `Atum` folder
6. Go to `Source/ThirdParty/LibTorch/Win64`
7. Replace `include` and `lib` with the extracted folders from step 2
8. Go to `include/torch/csrc/api/include/torch/enum.h`
9. Find the following line of code
    ```c++
    TORCH_API extern const enumtype::k##name k##name;
    ```
10. Remove `TORCH_API extern` from the aforementioned line of code
11. Go to `include/torch/csrc/api/include/torch/nn/module.h`
12. Find the `Module` class
13. Add the following line of code inside it
    ```c++
    friend class IAtumLayer;
    ```

<p align="right">(<a href="#top">back to top</a>)</p>

<div id="usage"></div>

## Usage

Check out the project at https://github.com/bUsernameIsUnavailable/CartPole

<p align="right">(<a href="#top">back to top</a>)</p>

<div id="license"></div>

## License

Distributed under the MIT License. See `LICENSE` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>

[contributors-shield]: https://img.shields.io/github/contributors/UE-ATUM/Plugin.svg?style=for-the-badge
[contributors-url]: https://github.com/UE-ATUM/Plugin/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/UE-ATUM/Plugin.svg?style=for-the-badge
[forks-url]: https://github.com/UE-ATUM/Plugin/network/members
[stars-shield]: https://img.shields.io/github/stars/UE-ATUM/Plugin.svg?style=for-the-badge
[stars-url]: https://github.com/UE-ATUM/Plugin/stargazers
[issues-shield]: https://img.shields.io/github/issues/UE-ATUM/Plugin.svg?style=for-the-badge
[issues-url]: https://github.com/UE-ATUM/Plugin/issues
[license-shield]: https://img.shields.io/github/license/UE-ATUM/Plugin.svg?style=for-the-badge
[license-url]: https://github.com/UE-ATUM/Plugin/blob/master/LICENSE
