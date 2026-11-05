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

// Function: sub_0027C900
// Address: 0x27c900 - 0x27ca58
void sub_0027C900_0x27c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C900_0x27c900");
#endif

    switch (ctx->pc) {
        case 0x27c950u: goto label_27c950;
        case 0x27c968u: goto label_27c968;
        case 0x27c978u: goto label_27c978;
        case 0x27c980u: goto label_27c980;
        case 0x27c98cu: goto label_27c98c;
        case 0x27c99cu: goto label_27c99c;
        case 0x27c9a8u: goto label_27c9a8;
        case 0x27c9b4u: goto label_27c9b4;
        case 0x27c9e0u: goto label_27c9e0;
        case 0x27c9e8u: goto label_27c9e8;
        case 0x27c9f0u: goto label_27c9f0;
        case 0x27c9fcu: goto label_27c9fc;
        case 0x27ca08u: goto label_27ca08;
        case 0x27ca28u: goto label_27ca28;
        default: break;
    }

    ctx->pc = 0x27c900u;

    // 0x27c900: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x27c904: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27c904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27c908: 0x8c44efc0  lw          $a0, -0x1040($v0)
    ctx->pc = 0x27c908u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BEFC0u));
    // 0x27c90c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27c914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27c91c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27c91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c920: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27c924: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x27c924u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x27c928: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27c92c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27c92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27c930: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x27c930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27c934: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x27c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x27c938: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x27c938u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27c93c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x27c93cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27c940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27c940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27c944: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x27c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x27c948: 0xc0a0352  jal         func_280D48
    ctx->pc = 0x27C948u;
    SET_GPR_U32(ctx, 31, 0x27C950u);
    ctx->pc = 0x27C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C948u;
    // 0x27c94c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D48u, 0x27C948u, 0x27C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C950u;
label_27c950:
    // 0x27c950: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27c950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27c954: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27c954u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c958: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27c958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27c95c: 0x24a59780  addiu       $a1, $a1, -0x6880
    ctx->pc = 0x27c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940544));
    // 0x27c960: 0xc0c7a76  jal         func_31E9D8
    ctx->pc = 0x27C960u;
    SET_GPR_U32(ctx, 31, 0x27C968u);
    ctx->pc = 0x27C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C960u;
    // 0x27c964: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x27C960u, 0x27C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C968u;
label_27c968:
    // 0x27c968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27c968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27c96c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27c96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27c970: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27c970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c974: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27c974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c978:
    // 0x27c978: 0xc0db256  jal         func_36C958
    ctx->pc = 0x27C978u;
    SET_GPR_U32(ctx, 31, 0x27C980u);
    ctx->pc = 0x27C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C978u;
    // 0x27c97c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x27C978u, 0x27C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C980u;
label_27c980:
    // 0x27c980: 0x8e44a300  lw          $a0, -0x5D00($s2)
    ctx->pc = 0x27c980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
    // 0x27c984: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x27C984u;
    SET_GPR_U32(ctx, 31, 0x27C98Cu);
    ctx->pc = 0x27C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C984u;
    // 0x27c988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x27C984u, 0x27C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C98Cu;
label_27c98c:
    // 0x27c98c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x27C98Cu;
    {
        const bool branch_taken_0x27c98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c98c) {
            ctx->pc = 0x27C990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C98Cu;
            // 0x27c990: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C9F4u;
            goto label_27c9f4;
        }
    }
    ctx->pc = 0x27C994u;
    // 0x27c994: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x27C994u;
    SET_GPR_U32(ctx, 31, 0x27C99Cu);
    ctx->pc = 0x27C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C994u;
    // 0x27c998: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x27C994u, 0x27C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C99Cu;
label_27c99c:
    // 0x27c99c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x27c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27c9a0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x27C9A0u;
    SET_GPR_U32(ctx, 31, 0x27C9A8u);
    ctx->pc = 0x27C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9A0u;
    // 0x27c9a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x27C9A0u, 0x27C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9A8u;
label_27c9a8:
    // 0x27c9a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c9ac: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x27C9ACu;
    SET_GPR_U32(ctx, 31, 0x27C9B4u);
    ctx->pc = 0x27C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9ACu;
    // 0x27c9b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x27C9ACu, 0x27C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9B4u;
label_27c9b4:
    // 0x27c9b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27c9b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27c9b8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27c9b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27c9bc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x27c9bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x27c9c0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x27c9c0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x27c9c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27c9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9d0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27c9d4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x27c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27c9d8: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x27C9D8u;
    SET_GPR_U32(ctx, 31, 0x27C9E0u);
    ctx->pc = 0x27C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9D8u;
    // 0x27c9dc: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x27C9D8u, 0x27C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9E0u;
label_27c9e0:
    // 0x27c9e0: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x27C9E0u;
    SET_GPR_U32(ctx, 31, 0x27C9E8u);
    ctx->pc = 0x27C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9E0u;
    // 0x27c9e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x27C9E0u, 0x27C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9E8u;
label_27c9e8:
    // 0x27c9e8: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x27C9E8u;
    SET_GPR_U32(ctx, 31, 0x27C9F0u);
    ctx->pc = 0x27C9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9E8u;
    // 0x27c9ec: 0x8e44a300  lw          $a0, -0x5D00($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x27C9E8u, 0x27C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9F0u;
label_27c9f0:
    // 0x27c9f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c9f4:
    // 0x27c9f4: 0xc0db2b6  jal         func_36CAD8
    ctx->pc = 0x27C9F4u;
    SET_GPR_U32(ctx, 31, 0x27C9FCu);
    ctx->pc = 0x27C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9F4u;
    // 0x27c9f8: 0x26100019  addiu       $s0, $s0, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x27C9F4u, 0x27C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9FCu;
label_27c9fc:
    // 0x27c9fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27ca00: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x27CA00u;
    SET_GPR_U32(ctx, 31, 0x27CA08u);
    ctx->pc = 0x27CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA00u;
    // 0x27ca04: 0x8e44a300  lw          $a0, -0x5D00($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x27CA00u, 0x27CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA08u;
label_27ca08:
    // 0x27ca08: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x27ca08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x27ca0c: 0x1635ffda  bne         $s1, $s5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x27CA0Cu;
    {
        const bool branch_taken_0x27ca0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x27CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA0Cu;
        // 0x27ca10: 0x282800a  movz        $s0, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca0c) {
            ctx->pc = 0x27C978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c978;
        }
    }
    ctx->pc = 0x27CA14u;
    // 0x27ca14: 0x1614ffd8  bne         $s0, $s4, . + 4 + (-0x28 << 2)
    ctx->pc = 0x27CA14u;
    {
        const bool branch_taken_0x27ca14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x27CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA14u;
        // 0x27ca18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca14) {
            ctx->pc = 0x27C978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c978;
        }
    }
    ctx->pc = 0x27CA1Cu;
    // 0x27ca1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27ca1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca20: 0xc0c7a32  jal         func_31E8C8
    ctx->pc = 0x27CA20u;
    SET_GPR_U32(ctx, 31, 0x27CA28u);
    ctx->pc = 0x27CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA20u;
    // 0x27ca24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C8u, 0x27CA20u, 0x27CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA28u;
label_27ca28:
    // 0x27ca28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ca28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ca2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27ca2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ca30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27ca30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ca34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27ca34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27ca38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27ca38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ca3c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27ca3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27ca40: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x27ca40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ca44: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x27ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27ca48: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x27ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ca4c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x27ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ca50: 0x3e00008  jr          $ra
    ctx->pc = 0x27CA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA50u;
        // 0x27ca54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CA58u;
}
