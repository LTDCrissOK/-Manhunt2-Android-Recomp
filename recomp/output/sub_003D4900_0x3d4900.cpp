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

// Function: sub_003D4900
// Address: 0x3d4900 - 0x3d4a04
void sub_003D4900_0x3d4900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4900_0x3d4900");
#endif

    switch (ctx->pc) {
        case 0x3d4900u: goto label_3d4900;
        case 0x3d4904u: goto label_3d4904;
        case 0x3d4908u: goto label_3d4908;
        case 0x3d490cu: goto label_3d490c;
        case 0x3d4910u: goto label_3d4910;
        case 0x3d4914u: goto label_3d4914;
        case 0x3d4918u: goto label_3d4918;
        case 0x3d491cu: goto label_3d491c;
        case 0x3d4920u: goto label_3d4920;
        case 0x3d4924u: goto label_3d4924;
        case 0x3d4928u: goto label_3d4928;
        case 0x3d492cu: goto label_3d492c;
        case 0x3d4930u: goto label_3d4930;
        case 0x3d4934u: goto label_3d4934;
        case 0x3d4938u: goto label_3d4938;
        case 0x3d493cu: goto label_3d493c;
        case 0x3d4940u: goto label_3d4940;
        case 0x3d4944u: goto label_3d4944;
        case 0x3d4948u: goto label_3d4948;
        case 0x3d494cu: goto label_3d494c;
        case 0x3d4950u: goto label_3d4950;
        case 0x3d4954u: goto label_3d4954;
        case 0x3d4958u: goto label_3d4958;
        case 0x3d495cu: goto label_3d495c;
        case 0x3d4960u: goto label_3d4960;
        case 0x3d4964u: goto label_3d4964;
        case 0x3d4968u: goto label_3d4968;
        case 0x3d496cu: goto label_3d496c;
        case 0x3d4970u: goto label_3d4970;
        case 0x3d4974u: goto label_3d4974;
        case 0x3d4978u: goto label_3d4978;
        case 0x3d497cu: goto label_3d497c;
        case 0x3d4980u: goto label_3d4980;
        case 0x3d4984u: goto label_3d4984;
        case 0x3d4988u: goto label_3d4988;
        case 0x3d498cu: goto label_3d498c;
        case 0x3d4990u: goto label_3d4990;
        case 0x3d4994u: goto label_3d4994;
        case 0x3d4998u: goto label_3d4998;
        case 0x3d499cu: goto label_3d499c;
        case 0x3d49a0u: goto label_3d49a0;
        case 0x3d49a4u: goto label_3d49a4;
        case 0x3d49a8u: goto label_3d49a8;
        case 0x3d49acu: goto label_3d49ac;
        case 0x3d49b0u: goto label_3d49b0;
        case 0x3d49b4u: goto label_3d49b4;
        case 0x3d49b8u: goto label_3d49b8;
        case 0x3d49bcu: goto label_3d49bc;
        case 0x3d49c0u: goto label_3d49c0;
        case 0x3d49c4u: goto label_3d49c4;
        case 0x3d49c8u: goto label_3d49c8;
        case 0x3d49ccu: goto label_3d49cc;
        case 0x3d49d0u: goto label_3d49d0;
        case 0x3d49d4u: goto label_3d49d4;
        case 0x3d49d8u: goto label_3d49d8;
        case 0x3d49dcu: goto label_3d49dc;
        case 0x3d49e0u: goto label_3d49e0;
        case 0x3d49e4u: goto label_3d49e4;
        case 0x3d49e8u: goto label_3d49e8;
        case 0x3d49ecu: goto label_3d49ec;
        case 0x3d49f0u: goto label_3d49f0;
        case 0x3d49f4u: goto label_3d49f4;
        case 0x3d49f8u: goto label_3d49f8;
        case 0x3d49fcu: goto label_3d49fc;
        case 0x3d4a00u: goto label_3d4a00;
        default: break;
    }

    ctx->pc = 0x3d4900u;

label_3d4900:
    // 0x3d4900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d4900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d4904:
    // 0x3d4904: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3d4904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_3d4908:
    // 0x3d4908: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3d4908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d490c:
    // 0x3d490c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3d4910:
    // 0x3d4910: 0x84880b  movn        $s1, $a0, $a0
    ctx->pc = 0x3d4910u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_3d4914:
    // 0x3d4914: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3d4914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_3d4918:
    // 0x3d4918: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3d4918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3d491c:
    // 0x3d491c: 0xc0b241a  jal         func_2C9068
label_3d4920:
    if (ctx->pc == 0x3D4920u) {
        ctx->pc = 0x3D4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D491Cu;
        // 0x3d4920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4924u;
        goto label_3d4924;
    }
    ctx->pc = 0x3D491Cu;
    SET_GPR_U32(ctx, 31, 0x3D4924u);
    ctx->pc = 0x3D4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D491Cu;
    // 0x3d4920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x3D491Cu, 0x3D4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4924u;
label_3d4924:
    // 0x3d4924: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_3d4928:
    if (ctx->pc == 0x3D4928u) {
        ctx->pc = 0x3D4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4924u;
        // 0x3d4928: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D492Cu;
        goto label_3d492c;
    }
    ctx->pc = 0x3D4924u;
    {
        const bool branch_taken_0x3d4924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4924u;
        // 0x3d4928: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4924) {
            ctx->pc = 0x3D4A14u;
            return;
        }
    }
    ctx->pc = 0x3D492Cu;
label_3d492c:
    // 0x3d492c: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3d492cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
label_3d4930:
    // 0x3d4930: 0x8e02f770  lw          $v0, -0x890($s0)
    ctx->pc = 0x3d4930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965104)));
label_3d4934:
    // 0x3d4934: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3d4938:
    if (ctx->pc == 0x3D4938u) {
        ctx->pc = 0x3D4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4934u;
        // 0x3d4938: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D493Cu;
        goto label_3d493c;
    }
    ctx->pc = 0x3D4934u;
    {
        const bool branch_taken_0x3d4934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4934u;
        // 0x3d4938: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4934) {
            ctx->pc = 0x3D4998u;
            goto label_3d4998;
        }
    }
    ctx->pc = 0x3D493Cu;
label_3d493c:
    // 0x3d493c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3d4940:
    // 0x3d4940: 0x24512598  addiu       $s1, $v0, 0x2598
    ctx->pc = 0x3d4940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9624));
label_3d4944:
    // 0x3d4944: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d4944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d4948:
    // 0x3d4948: 0xc0f56de  jal         func_3D5B78
label_3d494c:
    if (ctx->pc == 0x3D494Cu) {
        ctx->pc = 0x3D494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4948u;
        // 0x3d494c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4950u;
        goto label_3d4950;
    }
    ctx->pc = 0x3D4948u;
    SET_GPR_U32(ctx, 31, 0x3D4950u);
    ctx->pc = 0x3D494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4948u;
    // 0x3d494c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B78u, 0x3D4948u, 0x3D4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4950u;
label_3d4950:
    // 0x3d4950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d4950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4954:
    // 0x3d4954: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d4958:
    if (ctx->pc == 0x3D4958u) {
        ctx->pc = 0x3D4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4954u;
        // 0x3d4958: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D495Cu;
        goto label_3d495c;
    }
    ctx->pc = 0x3D4954u;
    {
        const bool branch_taken_0x3d4954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4954u;
        // 0x3d4958: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4954) {
            ctx->pc = 0x3D4964u;
            goto label_3d4964;
        }
    }
    ctx->pc = 0x3D495Cu;
label_3d495c:
    // 0x3d495c: 0xc0f55b4  jal         func_3D56D0
label_3d4960:
    if (ctx->pc == 0x3D4960u) {
        ctx->pc = 0x3D4964u;
        goto label_3d4964;
    }
    ctx->pc = 0x3D495Cu;
    SET_GPR_U32(ctx, 31, 0x3D4964u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D495Cu, 0x3D4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4964u;
label_3d4964:
    // 0x3d4964: 0x26422470  addiu       $v0, $s2, 0x2470
    ctx->pc = 0x3d4964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9328));
label_3d4968:
    // 0x3d4968: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d4968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d496c:
    // 0x3d496c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d4970:
    // 0x3d4970: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d4970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d4974:
    // 0x3d4974: 0x40f809  jalr        $v0
label_3d4978:
    if (ctx->pc == 0x3D4978u) {
        ctx->pc = 0x3D497Cu;
        goto label_3d497c;
    }
    ctx->pc = 0x3D4974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D497Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4974u, 0x3D497Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D497Cu;
label_3d497c:
    // 0x3d497c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3d497cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
label_3d4980:
    // 0x3d4980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4984:
    // 0x3d4984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d4984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4988:
    // 0x3d4988: 0xc0f570c  jal         func_3D5C30
label_3d498c:
    if (ctx->pc == 0x3D498Cu) {
        ctx->pc = 0x3D498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4988u;
        // 0x3d498c: 0x24c671f8  addiu       $a2, $a2, 0x71F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4990u;
        goto label_3d4990;
    }
    ctx->pc = 0x3D4988u;
    SET_GPR_U32(ctx, 31, 0x3D4990u);
    ctx->pc = 0x3D498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4988u;
    // 0x3d498c: 0x24c671f8  addiu       $a2, $a2, 0x71F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5C30u, 0x3D4988u, 0x3D4990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4990u;
label_3d4990:
    // 0x3d4990: 0xc0f55b4  jal         func_3D56D0
label_3d4994:
    if (ctx->pc == 0x3D4994u) {
        ctx->pc = 0x3D4998u;
        goto label_3d4998;
    }
    ctx->pc = 0x3D4990u;
    SET_GPR_U32(ctx, 31, 0x3D4998u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D4990u, 0x3D4998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4998u;
label_3d4998:
    // 0x3d4998: 0x40f809  jalr        $v0
label_3d499c:
    if (ctx->pc == 0x3D499Cu) {
        ctx->pc = 0x3D49A0u;
        goto label_3d49a0;
    }
    ctx->pc = 0x3D4998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D49A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4998u, 0x3D49A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D49A0u;
label_3d49a0:
    // 0x3d49a0: 0xc0b241a  jal         func_2C9068
label_3d49a4:
    if (ctx->pc == 0x3D49A4u) {
        ctx->pc = 0x3D49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49A0u;
        // 0x3d49a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49A8u;
        goto label_3d49a8;
    }
    ctx->pc = 0x3D49A0u;
    SET_GPR_U32(ctx, 31, 0x3D49A8u);
    ctx->pc = 0x3D49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49A0u;
    // 0x3d49a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x3D49A0u, 0x3D49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49A8u;
label_3d49a8:
    // 0x3d49a8: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
label_3d49ac:
    if (ctx->pc == 0x3D49ACu) {
        ctx->pc = 0x3D49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49A8u;
        // 0x3d49ac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49B0u;
        goto label_3d49b0;
    }
    ctx->pc = 0x3D49A8u;
    {
        const bool branch_taken_0x3d49a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49A8u;
        // 0x3d49ac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d49a8) {
            ctx->pc = 0x3D4930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4930;
        }
    }
    ctx->pc = 0x3D49B0u;
label_3d49b0:
    // 0x3d49b0: 0x10000019  b           . + 4 + (0x19 << 2)
label_3d49b4:
    if (ctx->pc == 0x3D49B4u) {
        ctx->pc = 0x3D49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49B0u;
        // 0x3d49b4: 0xdfb20040  ld          $s2, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49B8u;
        goto label_3d49b8;
    }
    ctx->pc = 0x3D49B0u;
    {
        const bool branch_taken_0x3d49b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49B0u;
        // 0x3d49b4: 0xdfb20040  ld          $s2, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d49b0) {
            ctx->pc = 0x3D4A18u;
            return;
        }
    }
    ctx->pc = 0x3D49B8u;
label_3d49b8:
    // 0x3d49b8: 0xc0f55b4  jal         func_3D56D0
label_3d49bc:
    if (ctx->pc == 0x3D49BCu) {
        ctx->pc = 0x3D49C0u;
        goto label_3d49c0;
    }
    ctx->pc = 0x3D49B8u;
    SET_GPR_U32(ctx, 31, 0x3D49C0u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D49B8u, 0x3D49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49C0u;
label_3d49c0:
    // 0x3d49c0: 0x26422470  addiu       $v0, $s2, 0x2470
    ctx->pc = 0x3d49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9328));
label_3d49c4:
    // 0x3d49c4: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_3d49c8:
    if (ctx->pc == 0x3D49C8u) {
        ctx->pc = 0x3D49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49C4u;
        // 0x3d49c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49CCu;
        goto label_3d49cc;
    }
    ctx->pc = 0x3D49C4u;
    {
        const bool branch_taken_0x3d49c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49C4u;
        // 0x3d49c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d49c4) {
            ctx->pc = 0x3D495Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d495c;
        }
    }
    ctx->pc = 0x3D49CCu;
label_3d49cc:
    // 0x3d49cc: 0xc0f56d0  jal         func_3D5B40
label_3d49d0:
    if (ctx->pc == 0x3D49D0u) {
        ctx->pc = 0x3D49D4u;
        goto label_3d49d4;
    }
    ctx->pc = 0x3D49CCu;
    SET_GPR_U32(ctx, 31, 0x3D49D4u);
    ctx->pc = 0x3D5B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B40u, 0x3D49CCu, 0x3D49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49D4u;
label_3d49d4:
    // 0x3d49d4: 0xc0f5c6a  jal         func_3D71A8
label_3d49d8:
    if (ctx->pc == 0x3D49D8u) {
        ctx->pc = 0x3D49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49D4u;
        // 0x3d49d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49DCu;
        goto label_3d49dc;
    }
    ctx->pc = 0x3D49D4u;
    SET_GPR_U32(ctx, 31, 0x3D49DCu);
    ctx->pc = 0x3D49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49D4u;
    // 0x3d49d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D71A8u, 0x3D49D4u, 0x3D49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49DCu;
label_3d49dc:
    // 0x3d49dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3d49dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3d49e0:
    // 0x3d49e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d49e4:
    // 0x3d49e4: 0xc0f576e  jal         func_3D5DB8
label_3d49e8:
    if (ctx->pc == 0x3D49E8u) {
        ctx->pc = 0x3D49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49E4u;
        // 0x3d49e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49ECu;
        goto label_3d49ec;
    }
    ctx->pc = 0x3D49E4u;
    SET_GPR_U32(ctx, 31, 0x3D49ECu);
    ctx->pc = 0x3D49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49E4u;
    // 0x3d49e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5DB8u, 0x3D49E4u, 0x3D49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49ECu;
label_3d49ec:
    // 0x3d49ec: 0xc0f55b4  jal         func_3D56D0
label_3d49f0:
    if (ctx->pc == 0x3D49F0u) {
        ctx->pc = 0x3D49F4u;
        goto label_3d49f4;
    }
    ctx->pc = 0x3D49ECu;
    SET_GPR_U32(ctx, 31, 0x3D49F4u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D49ECu, 0x3D49F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49F4u;
label_3d49f4:
    // 0x3d49f4: 0xc0f5730  jal         func_3D5CC0
label_3d49f8:
    if (ctx->pc == 0x3D49F8u) {
        ctx->pc = 0x3D49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49F4u;
        // 0x3d49f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49FCu;
        goto label_3d49fc;
    }
    ctx->pc = 0x3D49F4u;
    SET_GPR_U32(ctx, 31, 0x3D49FCu);
    ctx->pc = 0x3D49F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49F4u;
    // 0x3d49f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5CC0u, 0x3D49F4u, 0x3D49FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49FCu;
label_3d49fc:
    // 0x3d49fc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_3d4a00:
    if (ctx->pc == 0x3D4A00u) {
        ctx->pc = 0x3D4A04u;
        goto label_fallthrough_0x3d49fc;
    }
    ctx->pc = 0x3D49FCu;
    {
        const bool branch_taken_0x3d49fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d49fc) {
            ctx->pc = 0x3D49ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d49ec;
        }
    }
label_fallthrough_0x3d49fc:
    ctx->pc = 0x3D4A04u;
}
