#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00345200
// Address: 0x345200 - 0x3453e8
void sub_00345200_0x345200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345200_0x345200");
#endif

    switch (ctx->pc) {
        case 0x345224u: goto label_345224;
        case 0x3452a4u: goto label_3452a4;
        default: break;
    }

    ctx->pc = 0x345200u;

    // 0x345200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345204: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x345204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x345208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34520c: 0x244244b0  addiu       $v0, $v0, 0x44B0
    ctx->pc = 0x34520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17584));
    // 0x345210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345214: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x345214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x345218: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x345218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34521c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x34521Cu;
    SET_GPR_U32(ctx, 31, 0x345224u);
    ctx->pc = 0x345220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34521Cu;
    // 0x345220: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x34521Cu, 0x345224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345224u;
label_345224:
    // 0x345224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x345224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x345228: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x345228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34522c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x34522cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x345230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345234: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x345234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x345238: 0x24424480  addiu       $v0, $v0, 0x4480
    ctx->pc = 0x345238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17536));
    // 0x34523c: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x34523cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x345240: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x345240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x345244: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x345244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x345248: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x345248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x34524c: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x34524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x345250: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x345250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x345254: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x345254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x345258: 0xe6140034  swc1        $f20, 0x34($s0)
    ctx->pc = 0x345258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34525c: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x34525cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x345260: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x345260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x345264: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x345264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x345268: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x345268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x34526c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x34526cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x345270: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x345270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x345274: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x345274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x345278: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x345278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x34527c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x34527cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x345280: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x345280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x345284: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x345284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x345288: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x345288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34528c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x34528cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x345290: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x345290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x345294: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x345294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x345298: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x345298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x34529c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34529Cu;
    SET_GPR_U32(ctx, 31, 0x3452A4u);
    ctx->pc = 0x3452A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34529Cu;
    // 0x3452a0: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34529Cu, 0x3452A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3452A4u;
label_3452a4:
    // 0x3452a4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3452a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3452a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3452a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3452ac: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x3452acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3452b0: 0xe6140090  swc1        $f20, 0x90($s0)
    ctx->pc = 0x3452b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3452b4: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x3452b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3452b8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x3452b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x3452bc: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x3452bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x3452c0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x3452c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3452c4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3452c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3452c8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x3452c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3452cc: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x3452ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3452d0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3452d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3452d4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3452d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3452d8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3452d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x3452dc: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x3452dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x3452e0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3452e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3452e4: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x3452e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x3452e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3452e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3452ec: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x3452ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x3452f0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3452f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3452f4: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x3452f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x3452f8: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3452f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x3452fc: 0x25294be0  addiu       $t1, $t1, 0x4BE0
    ctx->pc = 0x3452fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19424));
    // 0x345300: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x345300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x345304: 0x25084c78  addiu       $t0, $t0, 0x4C78
    ctx->pc = 0x345304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19576));
    // 0x345308: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x345308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x34530c: 0x24e74f88  addiu       $a3, $a3, 0x4F88
    ctx->pc = 0x34530cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20360));
    // 0x345310: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x345310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x345314: 0x24c64fb0  addiu       $a2, $a2, 0x4FB0
    ctx->pc = 0x345314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20400));
    // 0x345318: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x345318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x34531c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34531cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345320: 0xae0b010c  sw          $t3, 0x10C($s0)
    ctx->pc = 0x345320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 11));
    // 0x345324: 0xae0a0110  sw          $t2, 0x110($s0)
    ctx->pc = 0x345324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 10));
    // 0x345328: 0xa20400b0  sb          $a0, 0xB0($s0)
    ctx->pc = 0x345328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 4));
    // 0x34532c: 0xa20400b1  sb          $a0, 0xB1($s0)
    ctx->pc = 0x34532cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 4));
    // 0x345330: 0xa20400b2  sb          $a0, 0xB2($s0)
    ctx->pc = 0x345330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 178), (uint8_t)GPR_U32(ctx, 4));
    // 0x345334: 0xa20400b3  sb          $a0, 0xB3($s0)
    ctx->pc = 0x345334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 179), (uint8_t)GPR_U32(ctx, 4));
    // 0x345338: 0xa20400b4  sb          $a0, 0xB4($s0)
    ctx->pc = 0x345338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 180), (uint8_t)GPR_U32(ctx, 4));
    // 0x34533c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x34533cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x345340: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x345340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x345344: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x345344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x345348: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x345348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x34534c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x34534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x345350: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x345350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x345354: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x345354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x345358: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x345358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x34535c: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x34535cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x345360: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x345360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x345364: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x345364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x345368: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x345368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x34536c: 0x3c014311  lui         $at, 0x4311
    ctx->pc = 0x34536cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17169 << 16));
    // 0x345370: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345374: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x345374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x345378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34537c: 0x3c01430b  lui         $at, 0x430B
    ctx->pc = 0x34537cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17163 << 16));
    // 0x345380: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x345380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345384: 0x3c01430d  lui         $at, 0x430D
    ctx->pc = 0x345384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17165 << 16));
    // 0x345388: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x345388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34538c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x34538cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x345390: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x345390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x345394: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x345394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x345398: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x345398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34539c: 0xa20400b5  sb          $a0, 0xB5($s0)
    ctx->pc = 0x34539cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 4));
    // 0x3453a0: 0xa20400b7  sb          $a0, 0xB7($s0)
    ctx->pc = 0x3453a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 183), (uint8_t)GPR_U32(ctx, 4));
    // 0x3453a4: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x3453a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x3453a8: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x3453a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x3453ac: 0xe60200f8  swc1        $f2, 0xF8($s0)
    ctx->pc = 0x3453acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x3453b0: 0xe60300e0  swc1        $f3, 0xE0($s0)
    ctx->pc = 0x3453b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x3453b4: 0xe60400e4  swc1        $f4, 0xE4($s0)
    ctx->pc = 0x3453b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x3453b8: 0xe60500e8  swc1        $f5, 0xE8($s0)
    ctx->pc = 0x3453b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x3453bc: 0xae09012c  sw          $t1, 0x12C($s0)
    ctx->pc = 0x3453bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 9));
    // 0x3453c0: 0xae080130  sw          $t0, 0x130($s0)
    ctx->pc = 0x3453c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 8));
    // 0x3453c4: 0xae070138  sw          $a3, 0x138($s0)
    ctx->pc = 0x3453c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 7));
    // 0x3453c8: 0xae060134  sw          $a2, 0x134($s0)
    ctx->pc = 0x3453c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 6));
    // 0x3453cc: 0xa20400b6  sb          $a0, 0xB6($s0)
    ctx->pc = 0x3453ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 4));
    // 0x3453d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3453d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3453d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3453d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3453d8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3453d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3453dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3453DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3453E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453DCu;
        // 0x3453e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3453DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3453E4u;
    // 0x3453e4: 0x0  nop
    ctx->pc = 0x3453e4u;
    // NOP
    ctx->pc = 0x3453e8u;
}
