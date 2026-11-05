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

// Function: sub_00345010
// Address: 0x345010 - 0x345200
void sub_00345010_0x345010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345010_0x345010");
#endif

    switch (ctx->pc) {
        case 0x34503cu: goto label_34503c;
        case 0x3450bcu: goto label_3450bc;
        default: break;
    }

    ctx->pc = 0x345010u;

    // 0x345010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x345014: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x345014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x345018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34501c: 0x244244b0  addiu       $v0, $v0, 0x44B0
    ctx->pc = 0x34501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17584));
    // 0x345020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34502c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34502cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345030: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x345030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x345034: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x345034u;
    SET_GPR_U32(ctx, 31, 0x34503Cu);
    ctx->pc = 0x345038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345034u;
    // 0x345038: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x345034u, 0x34503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34503Cu;
label_34503c:
    // 0x34503c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34503cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x345040: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x345040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x345044: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x345044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x345048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34504c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x34504cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x345050: 0x24424480  addiu       $v0, $v0, 0x4480
    ctx->pc = 0x345050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17536));
    // 0x345054: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x345054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x345058: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x345058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x34505c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x34505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x345060: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x345060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x345064: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x345064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x345068: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x345068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x34506c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x34506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x345070: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x345070u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x345074: 0xe6140034  swc1        $f20, 0x34($s0)
    ctx->pc = 0x345074u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x345078: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x345078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x34507c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x34507cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x345080: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x345080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x345084: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x345084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x345088: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x345088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x34508c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x34508cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x345090: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x345090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x345094: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x345094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x345098: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x345098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x34509c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x34509cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3450a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3450a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3450a4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3450a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x3450a8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3450a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3450ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3450acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3450b0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3450b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3450b4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3450B4u;
    SET_GPR_U32(ctx, 31, 0x3450BCu);
    ctx->pc = 0x3450B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3450B4u;
    // 0x3450b8: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3450B4u, 0x3450BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450BCu;
label_3450bc:
    // 0x3450bc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3450bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3450c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3450c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3450c4: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x3450c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3450c8: 0xe6140090  swc1        $f20, 0x90($s0)
    ctx->pc = 0x3450c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3450cc: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x3450ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3450d0: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x3450d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x3450d4: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x3450d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x3450d8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x3450d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3450dc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3450dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3450e0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x3450e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3450e4: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x3450e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3450e8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3450e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3450ec: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3450ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3450f0: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3450f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x3450f4: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x3450f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x3450f8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3450f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3450fc: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x3450fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x345100: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x345100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x345104: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x345104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x345108: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x345108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x34510c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x34510cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x345110: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x345110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x345114: 0x25294be0  addiu       $t1, $t1, 0x4BE0
    ctx->pc = 0x345114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19424));
    // 0x345118: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x345118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x34511c: 0x25084c78  addiu       $t0, $t0, 0x4C78
    ctx->pc = 0x34511cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19576));
    // 0x345120: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x345120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x345124: 0x24e74f88  addiu       $a3, $a3, 0x4F88
    ctx->pc = 0x345124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20360));
    // 0x345128: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x345128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x34512c: 0x24c64fb0  addiu       $a2, $a2, 0x4FB0
    ctx->pc = 0x34512cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20400));
    // 0x345130: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x345130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x345134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x345134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345138: 0xae0b010c  sw          $t3, 0x10C($s0)
    ctx->pc = 0x345138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 11));
    // 0x34513c: 0xae0a0110  sw          $t2, 0x110($s0)
    ctx->pc = 0x34513cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 10));
    // 0x345140: 0xa20400b0  sb          $a0, 0xB0($s0)
    ctx->pc = 0x345140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 4));
    // 0x345144: 0xa20400b1  sb          $a0, 0xB1($s0)
    ctx->pc = 0x345144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 4));
    // 0x345148: 0xa20400b2  sb          $a0, 0xB2($s0)
    ctx->pc = 0x345148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 178), (uint8_t)GPR_U32(ctx, 4));
    // 0x34514c: 0xa20400b3  sb          $a0, 0xB3($s0)
    ctx->pc = 0x34514cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 179), (uint8_t)GPR_U32(ctx, 4));
    // 0x345150: 0xa20400b4  sb          $a0, 0xB4($s0)
    ctx->pc = 0x345150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 180), (uint8_t)GPR_U32(ctx, 4));
    // 0x345154: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x345154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x345158: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x345158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x34515c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x34515cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x345160: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x345160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x345164: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x345164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x345168: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x345168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x34516c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x34516cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x345170: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x345170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x345174: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x345174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x345178: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x345178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x34517c: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x34517cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x345180: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x345180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x345184: 0x3c014311  lui         $at, 0x4311
    ctx->pc = 0x345184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17169 << 16));
    // 0x345188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34518c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x34518cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x345190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345194: 0x3c01430b  lui         $at, 0x430B
    ctx->pc = 0x345194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17163 << 16));
    // 0x345198: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x345198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34519c: 0x3c01430d  lui         $at, 0x430D
    ctx->pc = 0x34519cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17165 << 16));
    // 0x3451a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3451a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3451a4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3451a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3451a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3451a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3451ac: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x3451acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x3451b0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3451b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3451b4: 0xa20400b5  sb          $a0, 0xB5($s0)
    ctx->pc = 0x3451b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 4));
    // 0x3451b8: 0xa20400b7  sb          $a0, 0xB7($s0)
    ctx->pc = 0x3451b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 183), (uint8_t)GPR_U32(ctx, 4));
    // 0x3451bc: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x3451bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x3451c0: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x3451c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x3451c4: 0xe60200f8  swc1        $f2, 0xF8($s0)
    ctx->pc = 0x3451c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x3451c8: 0xe60300e0  swc1        $f3, 0xE0($s0)
    ctx->pc = 0x3451c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x3451cc: 0xe60400e4  swc1        $f4, 0xE4($s0)
    ctx->pc = 0x3451ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x3451d0: 0xe60500e8  swc1        $f5, 0xE8($s0)
    ctx->pc = 0x3451d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x3451d4: 0xae09012c  sw          $t1, 0x12C($s0)
    ctx->pc = 0x3451d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 9));
    // 0x3451d8: 0xae080130  sw          $t0, 0x130($s0)
    ctx->pc = 0x3451d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 8));
    // 0x3451dc: 0xae070138  sw          $a3, 0x138($s0)
    ctx->pc = 0x3451dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 7));
    // 0x3451e0: 0xae060134  sw          $a2, 0x134($s0)
    ctx->pc = 0x3451e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 6));
    // 0x3451e4: 0xa20400b6  sb          $a0, 0xB6($s0)
    ctx->pc = 0x3451e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 4));
    // 0x3451e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3451e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3451ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3451ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3451f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3451f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3451f4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3451f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3451f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3451F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3451FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451F8u;
        // 0x3451fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3451F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345200u;
}
