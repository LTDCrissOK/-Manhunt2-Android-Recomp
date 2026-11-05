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

// Function: sub_0029BB98
// Address: 0x29bb98 - 0x29bf58
void sub_0029BB98_0x29bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BB98_0x29bb98");
#endif

    switch (ctx->pc) {
        case 0x29bbf0u: goto label_29bbf0;
        case 0x29bc0cu: goto label_29bc0c;
        case 0x29bc1cu: goto label_29bc1c;
        case 0x29bc34u: goto label_29bc34;
        case 0x29bc48u: goto label_29bc48;
        case 0x29bc60u: goto label_29bc60;
        case 0x29bc70u: goto label_29bc70;
        case 0x29bc84u: goto label_29bc84;
        case 0x29bc94u: goto label_29bc94;
        case 0x29bca4u: goto label_29bca4;
        case 0x29bcc0u: goto label_29bcc0;
        case 0x29bcd0u: goto label_29bcd0;
        case 0x29bcf4u: goto label_29bcf4;
        case 0x29bd08u: goto label_29bd08;
        case 0x29bd14u: goto label_29bd14;
        case 0x29bd24u: goto label_29bd24;
        case 0x29bd38u: goto label_29bd38;
        case 0x29bd44u: goto label_29bd44;
        case 0x29bd54u: goto label_29bd54;
        case 0x29bd68u: goto label_29bd68;
        case 0x29bd74u: goto label_29bd74;
        case 0x29bd84u: goto label_29bd84;
        case 0x29bd98u: goto label_29bd98;
        case 0x29bda4u: goto label_29bda4;
        case 0x29bdb4u: goto label_29bdb4;
        case 0x29bdc8u: goto label_29bdc8;
        case 0x29bdd4u: goto label_29bdd4;
        case 0x29bde4u: goto label_29bde4;
        case 0x29bdf8u: goto label_29bdf8;
        case 0x29be04u: goto label_29be04;
        case 0x29be14u: goto label_29be14;
        case 0x29be28u: goto label_29be28;
        case 0x29be34u: goto label_29be34;
        case 0x29be44u: goto label_29be44;
        case 0x29be58u: goto label_29be58;
        case 0x29be64u: goto label_29be64;
        case 0x29be74u: goto label_29be74;
        case 0x29be88u: goto label_29be88;
        case 0x29be94u: goto label_29be94;
        case 0x29bea4u: goto label_29bea4;
        case 0x29beb8u: goto label_29beb8;
        case 0x29bec4u: goto label_29bec4;
        case 0x29bed4u: goto label_29bed4;
        case 0x29bee8u: goto label_29bee8;
        case 0x29bef4u: goto label_29bef4;
        case 0x29bf04u: goto label_29bf04;
        case 0x29bf1cu: goto label_29bf1c;
        case 0x29bf28u: goto label_29bf28;
        default: break;
    }

    ctx->pc = 0x29bb98u;

    // 0x29bb98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29bb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29bb9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bba0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x29bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x29bba4: 0x24a5bf10  addiu       $a1, $a1, -0x40F0
    ctx->pc = 0x29bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950672));
    // 0x29bba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29bba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbac: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x29bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29bbb0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x29bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x29bbb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbb8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x29bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x29bbbc: 0x263201e8  addiu       $s2, $s1, 0x1E8
    ctx->pc = 0x29bbbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    // 0x29bbc0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29bbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29bbc4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x29bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x29bbc8: 0x26340128  addiu       $s4, $s1, 0x128
    ctx->pc = 0x29bbc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x29bbcc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x29bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29bbd0: 0x26350140  addiu       $s5, $s1, 0x140
    ctx->pc = 0x29bbd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x29bbd4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x29bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x29bbd8: 0x26360188  addiu       $s6, $s1, 0x188
    ctx->pc = 0x29bbd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 392));
    // 0x29bbdc: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x29bbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x29bbe0: 0x263701a0  addiu       $s7, $s1, 0x1A0
    ctx->pc = 0x29bbe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x29bbe4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x29bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x29bbe8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BBE8u;
    SET_GPR_U32(ctx, 31, 0x29BBF0u);
    ctx->pc = 0x29BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBE8u;
    // 0x29bbec: 0x263e01d0  addiu       $fp, $s1, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BBE8u, 0x29BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBF0u;
label_29bbf0:
    // 0x29bbf0: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x29bbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x29bbf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbf8: 0x26102508  addiu       $s0, $s0, 0x2508
    ctx->pc = 0x29bbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9480));
    // 0x29bbfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29bbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bc00: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x29bc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x29bc04: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BC04u;
    SET_GPR_U32(ctx, 31, 0x29BC0Cu);
    ctx->pc = 0x29BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC04u;
    // 0x29bc08: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BC04u, 0x29BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC0Cu;
label_29bc0c:
    // 0x29bc0c: 0x261300a0  addiu       $s3, $s0, 0xA0
    ctx->pc = 0x29bc0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x29bc10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc14: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BC14u;
    SET_GPR_U32(ctx, 31, 0x29BC1Cu);
    ctx->pc = 0x29BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC14u;
    // 0x29bc18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BC14u, 0x29BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC1Cu;
label_29bc1c:
    // 0x29bc1c: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x29bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x29bc20: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bc24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc28: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29bc2c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BC2Cu;
    SET_GPR_U32(ctx, 31, 0x29BC34u);
    ctx->pc = 0x29BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC2Cu;
    // 0x29bc30: 0x24a5bf20  addiu       $a1, $a1, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BC2Cu, 0x29BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC34u;
label_29bc34:
    // 0x29bc34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bc38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29bc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc40: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BC40u;
    SET_GPR_U32(ctx, 31, 0x29BC48u);
    ctx->pc = 0x29BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC40u;
    // 0x29bc44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BC40u, 0x29BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC48u;
label_29bc48:
    // 0x29bc48: 0x26330170  addiu       $s3, $s1, 0x170
    ctx->pc = 0x29bc48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x29bc4c: 0x26220158  addiu       $v0, $s1, 0x158
    ctx->pc = 0x29bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x29bc50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc54: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x29bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x29bc58: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BC58u;
    SET_GPR_U32(ctx, 31, 0x29BC60u);
    ctx->pc = 0x29BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC58u;
    // 0x29bc5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BC58u, 0x29BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC60u;
label_29bc60:
    // 0x29bc60: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bc64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc68: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BC68u;
    SET_GPR_U32(ctx, 31, 0x29BC70u);
    ctx->pc = 0x29BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC68u;
    // 0x29bc6c: 0x24a5bf30  addiu       $a1, $a1, -0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BC68u, 0x29BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC70u;
label_29bc70:
    // 0x29bc70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc74: 0x260600a4  addiu       $a2, $s0, 0xA4
    ctx->pc = 0x29bc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x29bc78: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x29bc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29bc7c: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BC7Cu;
    SET_GPR_U32(ctx, 31, 0x29BC84u);
    ctx->pc = 0x29BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC7Cu;
    // 0x29bc80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BC7Cu, 0x29BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC84u;
label_29bc84:
    // 0x29bc84: 0x263401b8  addiu       $s4, $s1, 0x1B8
    ctx->pc = 0x29bc84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
    // 0x29bc88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc8c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BC8Cu;
    SET_GPR_U32(ctx, 31, 0x29BC94u);
    ctx->pc = 0x29BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC8Cu;
    // 0x29bc90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BC8Cu, 0x29BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC94u;
label_29bc94:
    // 0x29bc94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bc98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc9c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BC9Cu;
    SET_GPR_U32(ctx, 31, 0x29BCA4u);
    ctx->pc = 0x29BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC9Cu;
    // 0x29bca0: 0x24a5bf40  addiu       $a1, $a1, -0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BC9Cu, 0x29BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCA4u;
label_29bca4:
    // 0x29bca4: 0x26220200  addiu       $v0, $s1, 0x200
    ctx->pc = 0x29bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x29bca8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bcac: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x29bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x29bcb0: 0x260600a8  addiu       $a2, $s0, 0xA8
    ctx->pc = 0x29bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x29bcb4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x29bcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29bcb8: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BCB8u;
    SET_GPR_U32(ctx, 31, 0x29BCC0u);
    ctx->pc = 0x29BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BCB8u;
    // 0x29bcbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BCB8u, 0x29BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCC0u;
label_29bcc0:
    // 0x29bcc0: 0x26350218  addiu       $s5, $s1, 0x218
    ctx->pc = 0x29bcc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 536));
    // 0x29bcc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bcc8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BCC8u;
    SET_GPR_U32(ctx, 31, 0x29BCD0u);
    ctx->pc = 0x29BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BCC8u;
    // 0x29bccc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BCC8u, 0x29BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCD0u;
label_29bcd0:
    // 0x29bcd0: 0x26220230  addiu       $v0, $s1, 0x230
    ctx->pc = 0x29bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x29bcd4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bcd8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x29bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x29bcdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bce0: 0x26220248  addiu       $v0, $s1, 0x248
    ctx->pc = 0x29bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
    // 0x29bce4: 0x24a5bf50  addiu       $a1, $a1, -0x40B0
    ctx->pc = 0x29bce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950736));
    // 0x29bce8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29bcec: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BCECu;
    SET_GPR_U32(ctx, 31, 0x29BCF4u);
    ctx->pc = 0x29BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BCECu;
    // 0x29bcf0: 0x26310260  addiu       $s1, $s1, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BCECu, 0x29BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCF4u;
label_29bcf4:
    // 0x29bcf4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x29bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x29bcf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bcfc: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x29bcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x29bd00: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BD00u;
    SET_GPR_U32(ctx, 31, 0x29BD08u);
    ctx->pc = 0x29BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD00u;
    // 0x29bd04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BD00u, 0x29BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD08u;
label_29bd08:
    // 0x29bd08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd0c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BD0Cu;
    SET_GPR_U32(ctx, 31, 0x29BD14u);
    ctx->pc = 0x29BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD0Cu;
    // 0x29bd10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BD0Cu, 0x29BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD14u;
label_29bd14:
    // 0x29bd14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bd18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd1c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BD1Cu;
    SET_GPR_U32(ctx, 31, 0x29BD24u);
    ctx->pc = 0x29BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD1Cu;
    // 0x29bd20: 0x24a5bf60  addiu       $a1, $a1, -0x40A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BD1Cu, 0x29BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD24u;
label_29bd24:
    // 0x29bd24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd28: 0x260600c8  addiu       $a2, $s0, 0xC8
    ctx->pc = 0x29bd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x29bd2c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x29bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29bd30: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BD30u;
    SET_GPR_U32(ctx, 31, 0x29BD38u);
    ctx->pc = 0x29BD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD30u;
    // 0x29bd34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BD30u, 0x29BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD38u;
label_29bd38:
    // 0x29bd38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd3c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BD3Cu;
    SET_GPR_U32(ctx, 31, 0x29BD44u);
    ctx->pc = 0x29BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD3Cu;
    // 0x29bd40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BD3Cu, 0x29BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD44u;
label_29bd44:
    // 0x29bd44: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bd48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd4c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BD4Cu;
    SET_GPR_U32(ctx, 31, 0x29BD54u);
    ctx->pc = 0x29BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD4Cu;
    // 0x29bd50: 0x24a5bf70  addiu       $a1, $a1, -0x4090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BD4Cu, 0x29BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD54u;
label_29bd54:
    // 0x29bd54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd58: 0x260600cc  addiu       $a2, $s0, 0xCC
    ctx->pc = 0x29bd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x29bd5c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x29bd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29bd60: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BD60u;
    SET_GPR_U32(ctx, 31, 0x29BD68u);
    ctx->pc = 0x29BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD60u;
    // 0x29bd64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BD60u, 0x29BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD68u;
label_29bd68:
    // 0x29bd68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd6c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BD6Cu;
    SET_GPR_U32(ctx, 31, 0x29BD74u);
    ctx->pc = 0x29BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD6Cu;
    // 0x29bd70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BD6Cu, 0x29BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD74u;
label_29bd74:
    // 0x29bd74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bd78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd7c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BD7Cu;
    SET_GPR_U32(ctx, 31, 0x29BD84u);
    ctx->pc = 0x29BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD7Cu;
    // 0x29bd80: 0x24a5bf80  addiu       $a1, $a1, -0x4080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BD7Cu, 0x29BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD84u;
label_29bd84:
    // 0x29bd84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd88: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x29bd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x29bd8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29bd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bd90: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BD90u;
    SET_GPR_U32(ctx, 31, 0x29BD98u);
    ctx->pc = 0x29BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD90u;
    // 0x29bd94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BD90u, 0x29BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD98u;
label_29bd98:
    // 0x29bd98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd9c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BD9Cu;
    SET_GPR_U32(ctx, 31, 0x29BDA4u);
    ctx->pc = 0x29BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD9Cu;
    // 0x29bda0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BD9Cu, 0x29BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDA4u;
label_29bda4:
    // 0x29bda4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bda8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdac: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BDACu;
    SET_GPR_U32(ctx, 31, 0x29BDB4u);
    ctx->pc = 0x29BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDACu;
    // 0x29bdb0: 0x24a5bf98  addiu       $a1, $a1, -0x4068 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BDACu, 0x29BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDB4u;
label_29bdb4:
    // 0x29bdb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdb8: 0x260600d4  addiu       $a2, $s0, 0xD4
    ctx->pc = 0x29bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    // 0x29bdbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bdc0: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BDC0u;
    SET_GPR_U32(ctx, 31, 0x29BDC8u);
    ctx->pc = 0x29BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDC0u;
    // 0x29bdc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BDC0u, 0x29BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDC8u;
label_29bdc8:
    // 0x29bdc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdcc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BDCCu;
    SET_GPR_U32(ctx, 31, 0x29BDD4u);
    ctx->pc = 0x29BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDCCu;
    // 0x29bdd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BDCCu, 0x29BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDD4u;
label_29bdd4:
    // 0x29bdd4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bdd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bddc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BDDCu;
    SET_GPR_U32(ctx, 31, 0x29BDE4u);
    ctx->pc = 0x29BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDDCu;
    // 0x29bde0: 0x24a5bfa8  addiu       $a1, $a1, -0x4058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BDDCu, 0x29BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDE4u;
label_29bde4:
    // 0x29bde4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bde8: 0x260600d8  addiu       $a2, $s0, 0xD8
    ctx->pc = 0x29bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x29bdec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29bdecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bdf0: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BDF0u;
    SET_GPR_U32(ctx, 31, 0x29BDF8u);
    ctx->pc = 0x29BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDF0u;
    // 0x29bdf4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BDF0u, 0x29BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDF8u;
label_29bdf8:
    // 0x29bdf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdfc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BDFCu;
    SET_GPR_U32(ctx, 31, 0x29BE04u);
    ctx->pc = 0x29BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDFCu;
    // 0x29be00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BDFCu, 0x29BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE04u;
label_29be04:
    // 0x29be04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29be04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29be08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29be08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be0c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BE0Cu;
    SET_GPR_U32(ctx, 31, 0x29BE14u);
    ctx->pc = 0x29BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE0Cu;
    // 0x29be10: 0x24a5bfb8  addiu       $a1, $a1, -0x4048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BE0Cu, 0x29BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE14u;
label_29be14:
    // 0x29be14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29be14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be18: 0x260600dc  addiu       $a2, $s0, 0xDC
    ctx->pc = 0x29be18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x29be1c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x29be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29be20: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BE20u;
    SET_GPR_U32(ctx, 31, 0x29BE28u);
    ctx->pc = 0x29BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE20u;
    // 0x29be24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BE20u, 0x29BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE28u;
label_29be28:
    // 0x29be28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29be28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be2c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BE2Cu;
    SET_GPR_U32(ctx, 31, 0x29BE34u);
    ctx->pc = 0x29BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE2Cu;
    // 0x29be30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BE2Cu, 0x29BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE34u;
label_29be34:
    // 0x29be34: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29be34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29be38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29be38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be3c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BE3Cu;
    SET_GPR_U32(ctx, 31, 0x29BE44u);
    ctx->pc = 0x29BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE3Cu;
    // 0x29be40: 0x24a5bfc8  addiu       $a1, $a1, -0x4038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BE3Cu, 0x29BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE44u;
label_29be44:
    // 0x29be44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29be48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29be48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be4c: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x29be4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x29be50: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BE50u;
    SET_GPR_U32(ctx, 31, 0x29BE58u);
    ctx->pc = 0x29BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE50u;
    // 0x29be54: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BE50u, 0x29BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE58u;
label_29be58:
    // 0x29be58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29be58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be5c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BE5Cu;
    SET_GPR_U32(ctx, 31, 0x29BE64u);
    ctx->pc = 0x29BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE5Cu;
    // 0x29be60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BE5Cu, 0x29BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE64u;
label_29be64:
    // 0x29be64: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29be64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29be68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be6c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BE6Cu;
    SET_GPR_U32(ctx, 31, 0x29BE74u);
    ctx->pc = 0x29BE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE6Cu;
    // 0x29be70: 0x24a5bfd8  addiu       $a1, $a1, -0x4028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BE6Cu, 0x29BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE74u;
label_29be74:
    // 0x29be74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29be74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be78: 0x260600e4  addiu       $a2, $s0, 0xE4
    ctx->pc = 0x29be78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    // 0x29be7c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x29be7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29be80: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BE80u;
    SET_GPR_U32(ctx, 31, 0x29BE88u);
    ctx->pc = 0x29BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE80u;
    // 0x29be84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BE80u, 0x29BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE88u;
label_29be88:
    // 0x29be88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29be88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be8c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BE8Cu;
    SET_GPR_U32(ctx, 31, 0x29BE94u);
    ctx->pc = 0x29BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE8Cu;
    // 0x29be90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BE8Cu, 0x29BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE94u;
label_29be94:
    // 0x29be94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29be94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29be98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be9c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BE9Cu;
    SET_GPR_U32(ctx, 31, 0x29BEA4u);
    ctx->pc = 0x29BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE9Cu;
    // 0x29bea0: 0x24a5bff0  addiu       $a1, $a1, -0x4010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BE9Cu, 0x29BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEA4u;
label_29bea4:
    // 0x29bea4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x29bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x29bea8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29beac: 0x260600c4  addiu       $a2, $s0, 0xC4
    ctx->pc = 0x29beacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x29beb0: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BEB0u;
    SET_GPR_U32(ctx, 31, 0x29BEB8u);
    ctx->pc = 0x29BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEB0u;
    // 0x29beb4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BEB0u, 0x29BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEB8u;
label_29beb8:
    // 0x29beb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bebc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BEBCu;
    SET_GPR_U32(ctx, 31, 0x29BEC4u);
    ctx->pc = 0x29BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEBCu;
    // 0x29bec0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BEBCu, 0x29BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEC4u;
label_29bec4:
    // 0x29bec4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bec8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29becc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BECCu;
    SET_GPR_U32(ctx, 31, 0x29BED4u);
    ctx->pc = 0x29BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BECCu;
    // 0x29bed0: 0x24a5c000  addiu       $a1, $a1, -0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BECCu, 0x29BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BED4u;
label_29bed4:
    // 0x29bed4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bed8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bedc: 0x260600b8  addiu       $a2, $s0, 0xB8
    ctx->pc = 0x29bedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x29bee0: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BEE0u;
    SET_GPR_U32(ctx, 31, 0x29BEE8u);
    ctx->pc = 0x29BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEE0u;
    // 0x29bee4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BEE0u, 0x29BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEE8u;
label_29bee8:
    // 0x29bee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29beec: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BEECu;
    SET_GPR_U32(ctx, 31, 0x29BEF4u);
    ctx->pc = 0x29BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEECu;
    // 0x29bef0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BEECu, 0x29BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEF4u;
label_29bef4:
    // 0x29bef4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bef8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29befc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29BEFCu;
    SET_GPR_U32(ctx, 31, 0x29BF04u);
    ctx->pc = 0x29BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEFCu;
    // 0x29bf00: 0x24a5c010  addiu       $a1, $a1, -0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29BEFCu, 0x29BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF04u;
label_29bf04:
    // 0x29bf04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf0c: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x29bf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x29bf10: 0x24c625bc  addiu       $a2, $a2, 0x25BC
    ctx->pc = 0x29bf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9660));
    // 0x29bf14: 0xc0a6d82  jal         func_29B608
    ctx->pc = 0x29BF14u;
    SET_GPR_U32(ctx, 31, 0x29BF1Cu);
    ctx->pc = 0x29BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF14u;
    // 0x29bf18: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B608u, 0x29BF14u, 0x29BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF1Cu;
label_29bf1c:
    // 0x29bf1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf20: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29BF20u;
    SET_GPR_U32(ctx, 31, 0x29BF28u);
    ctx->pc = 0x29BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF20u;
    // 0x29bf24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29BF20u, 0x29BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF28u;
label_29bf28:
    // 0x29bf28: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29bf28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bf2c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x29bf2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29bf30: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x29bf30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bf34: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x29bf34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29bf38: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29bf38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bf3c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x29bf3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29bf40: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x29bf40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29bf44: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x29bf44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29bf48: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x29bf48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29bf4c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x29bf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x29bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF50u;
        // 0x29bf54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF58u;
}
