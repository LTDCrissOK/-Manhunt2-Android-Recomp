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

// Function: sub_001CBFD0
// Address: 0x1cbfd0 - 0x1cc110
void sub_001CBFD0_0x1cbfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBFD0_0x1cbfd0");
#endif

    switch (ctx->pc) {
        case 0x1cc008u: goto label_1cc008;
        case 0x1cc020u: goto label_1cc020;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc050u: goto label_1cc050;
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc064u: goto label_1cc064;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc07cu: goto label_1cc07c;
        case 0x1cc084u: goto label_1cc084;
        case 0x1cc090u: goto label_1cc090;
        default: break;
    }

    ctx->pc = 0x1cbfd0u;

    // 0x1cbfd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbfd4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1cbfd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cbfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cbfdc: 0x24421498  addiu       $v0, $v0, 0x1498
    ctx->pc = 0x1cbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5272));
    // 0x1cbfe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cbfe4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cbfe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbfe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cbfec: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1cbfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1cbff0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cbff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cbff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cbff8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1cbff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1cbffc: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x1cbffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x1cc000: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1CC000u;
    SET_GPR_U32(ctx, 31, 0x1CC008u);
    ctx->pc = 0x1CC004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC000u;
    // 0x1cc004: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1CC000u, 0x1CC008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC008u;
label_1cc008:
    // 0x1cc008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc00c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1cc00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cc010: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x1cc010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x1cc014: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1cc014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1cc018: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CC018u;
    SET_GPR_U32(ctx, 31, 0x1CC020u);
    ctx->pc = 0x1CC01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC018u;
    // 0x1cc01c: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CC018u, 0x1CC020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC020u;
label_1cc020:
    // 0x1cc020: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x1cc020u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x1cc024: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cc024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cc028: 0x26525ad0  addiu       $s2, $s2, 0x5AD0
    ctx->pc = 0x1cc028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23248));
    // 0x1cc02c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1cc02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cc030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc034: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1cc034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1cc038: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1cc038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1cc03c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x1CC03Cu;
    SET_GPR_U32(ctx, 31, 0x1CC044u);
    ctx->pc = 0x1CC040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC03Cu;
    // 0x1cc040: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x1CC03Cu, 0x1CC044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC044u;
label_1cc044:
    // 0x1cc044: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc048: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1CC048u;
    SET_GPR_U32(ctx, 31, 0x1CC050u);
    ctx->pc = 0x1CC04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC048u;
    // 0x1cc04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1CC048u, 0x1CC050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC050u;
label_1cc050:
    // 0x1cc050: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1CC050u;
    SET_GPR_U32(ctx, 31, 0x1CC058u);
    ctx->pc = 0x1CC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC050u;
    // 0x1cc054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1CC050u, 0x1CC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC058u;
label_1cc058:
    // 0x1cc058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc05c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1CC05Cu;
    SET_GPR_U32(ctx, 31, 0x1CC064u);
    ctx->pc = 0x1CC060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC05Cu;
    // 0x1cc060: 0xae110054  sw          $s1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1CC05Cu, 0x1CC064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC064u;
label_1cc064:
    // 0x1cc064: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1cc064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cc068: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x1CC068u;
    SET_GPR_U32(ctx, 31, 0x1CC070u);
    ctx->pc = 0x1CC06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC068u;
    // 0x1cc06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x1CC068u, 0x1CC070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC070u;
label_1cc070:
    // 0x1cc070: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc074: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1CC074u;
    SET_GPR_U32(ctx, 31, 0x1CC07Cu);
    ctx->pc = 0x1CC078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC074u;
    // 0x1cc078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1CC074u, 0x1CC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC07Cu;
label_1cc07c:
    // 0x1cc07c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1CC07Cu;
    SET_GPR_U32(ctx, 31, 0x1CC084u);
    ctx->pc = 0x1CC080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC07Cu;
    // 0x1cc080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1CC07Cu, 0x1CC084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC084u;
label_1cc084:
    // 0x1cc084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc088: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1CC088u;
    SET_GPR_U32(ctx, 31, 0x1CC090u);
    ctx->pc = 0x1CC08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC088u;
    // 0x1cc08c: 0xae110058  sw          $s1, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1CC088u, 0x1CC090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC090u;
label_1cc090:
    // 0x1cc090: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc094: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cc094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cc098: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1cc098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1cc09c: 0xc44189c4  lwc1        $f1, -0x763C($v0)
    ctx->pc = 0x1cc09cu;
    { uint32_t bits = FAST_READ32(0x3F89C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc0a0: 0xc46289c8  lwc1        $f2, -0x7638($v1)
    ctx->pc = 0x1cc0a0u;
    { uint32_t bits = FAST_READ32(0x3F89C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cc0a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc0a8: 0xc48089cc  lwc1        $f0, -0x7634($a0)
    ctx->pc = 0x1cc0a8u;
    { uint32_t bits = FAST_READ32(0x3F89CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc0ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1cc0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0b0: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x1cc0b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1cc0b4: 0xe6020078  swc1        $f2, 0x78($s0)
    ctx->pc = 0x1cc0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1cc0b8: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cc0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1cc0bc: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1cc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x1cc0c0: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x1cc0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x1cc0c4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1cc0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1cc0c8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1cc0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1cc0cc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1cc0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1cc0d0: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x1cc0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x1cc0d4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1cc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1cc0d8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1cc0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1cc0dc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1cc0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1cc0e0: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1cc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1cc0e4: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x1cc0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x1cc0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc0ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc0f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc0f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc0f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0FCu;
        // 0x1cc100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC104u;
    // 0x1cc104: 0x0  nop
    ctx->pc = 0x1cc104u;
    // NOP
    // 0x1cc108: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cc108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cc10c: 0x0  nop
    ctx->pc = 0x1cc10cu;
    // NOP
    ctx->pc = 0x1cc110u;
}
