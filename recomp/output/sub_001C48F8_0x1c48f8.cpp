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

// Function: sub_001C48F8
// Address: 0x1c48f8 - 0x1c4980
void sub_001C48F8_0x1c48f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C48F8_0x1c48f8");
#endif

    switch (ctx->pc) {
        case 0x1c48f8u: goto label_1c48f8;
        case 0x1c48fcu: goto label_1c48fc;
        case 0x1c4900u: goto label_1c4900;
        case 0x1c4904u: goto label_1c4904;
        case 0x1c4908u: goto label_1c4908;
        case 0x1c490cu: goto label_1c490c;
        case 0x1c4910u: goto label_1c4910;
        case 0x1c4914u: goto label_1c4914;
        case 0x1c4918u: goto label_1c4918;
        case 0x1c491cu: goto label_1c491c;
        case 0x1c4920u: goto label_1c4920;
        case 0x1c4924u: goto label_1c4924;
        case 0x1c4928u: goto label_1c4928;
        case 0x1c492cu: goto label_1c492c;
        case 0x1c4930u: goto label_1c4930;
        case 0x1c4934u: goto label_1c4934;
        case 0x1c4938u: goto label_1c4938;
        case 0x1c493cu: goto label_1c493c;
        case 0x1c4940u: goto label_1c4940;
        case 0x1c4944u: goto label_1c4944;
        case 0x1c4948u: goto label_1c4948;
        case 0x1c494cu: goto label_1c494c;
        case 0x1c4950u: goto label_1c4950;
        case 0x1c4954u: goto label_1c4954;
        case 0x1c4958u: goto label_1c4958;
        case 0x1c495cu: goto label_1c495c;
        case 0x1c4960u: goto label_1c4960;
        case 0x1c4964u: goto label_1c4964;
        case 0x1c4968u: goto label_1c4968;
        case 0x1c496cu: goto label_1c496c;
        case 0x1c4970u: goto label_1c4970;
        case 0x1c4974u: goto label_1c4974;
        case 0x1c4978u: goto label_1c4978;
        case 0x1c497cu: goto label_1c497c;
        default: break;
    }

    ctx->pc = 0x1c48f8u;

label_1c48f8:
    // 0x1c48f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c48f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c48fc:
    // 0x1c48fc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c4900:
    // 0x1c4900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c4904:
    // 0x1c4904: 0x24421458  addiu       $v0, $v0, 0x1458
    ctx->pc = 0x1c4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5208));
label_1c4908:
    // 0x1c4908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c490c:
    // 0x1c490c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c490cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4910:
    // 0x1c4910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c4914:
    // 0x1c4914: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1c4914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1c4918:
    // 0x1c4918: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1c4918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1c491c:
    // 0x1c491c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1c4920:
    if (ctx->pc == 0x1C4920u) {
        ctx->pc = 0x1C4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C491Cu;
        // 0x1c4920: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4924u;
        goto label_1c4924;
    }
    ctx->pc = 0x1C491Cu;
    {
        const bool branch_taken_0x1c491c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C491Cu;
        // 0x1c4920: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c491c) {
            ctx->pc = 0x1C4934u;
            goto label_1c4934;
        }
    }
    ctx->pc = 0x1C4924u;
label_1c4924:
    // 0x1c4924: 0x8c8304c8  lw          $v1, 0x4C8($a0)
    ctx->pc = 0x1c4924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
label_1c4928:
    // 0x1c4928: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c492c:
    // 0x1c492c: 0x40f809  jalr        $v0
label_1c4930:
    if (ctx->pc == 0x1C4930u) {
        ctx->pc = 0x1C4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C492Cu;
        // 0x1c4930: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4934u;
        goto label_1c4934;
    }
    ctx->pc = 0x1C492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4934u);
        ctx->pc = 0x1C4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C492Cu;
        // 0x1c4930: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C492Cu, 0x1C4934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4934u;
label_1c4934:
    // 0x1c4934: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c4934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c4938:
    // 0x1c4938: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1c4938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1c493c:
    // 0x1c493c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1c493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_1c4940:
    // 0x1c4940: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c4940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_1c4944:
    // 0x1c4944: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1c4944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1c4948:
    // 0x1c4948: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1c4948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_1c494c:
    // 0x1c494c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1c494cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_1c4950:
    // 0x1c4950: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c4954:
    if (ctx->pc == 0x1C4954u) {
        ctx->pc = 0x1C4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4950u;
        // 0x1c4954: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4958u;
        goto label_1c4958;
    }
    ctx->pc = 0x1C4950u;
    {
        const bool branch_taken_0x1c4950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4950u;
        // 0x1c4954: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4950) {
            ctx->pc = 0x1C4960u;
            goto label_1c4960;
        }
    }
    ctx->pc = 0x1C4958u;
label_1c4958:
    // 0x1c4958: 0xc0f5222  jal         func_3D4888
label_1c495c:
    if (ctx->pc == 0x1C495Cu) {
        ctx->pc = 0x1C495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4958u;
        // 0x1c495c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4960u;
        goto label_1c4960;
    }
    ctx->pc = 0x1C4958u;
    SET_GPR_U32(ctx, 31, 0x1C4960u);
    ctx->pc = 0x1C495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4958u;
    // 0x1c495c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4958u, 0x1C4960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4960u;
label_1c4960:
    // 0x1c4960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4964:
    // 0x1c4964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c4968:
    // 0x1c4968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c496c:
    // 0x1c496c: 0x3e00008  jr          $ra
label_1c4970:
    if (ctx->pc == 0x1C4970u) {
        ctx->pc = 0x1C4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C496Cu;
        // 0x1c4970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4974u;
        goto label_1c4974;
    }
    ctx->pc = 0x1C496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C496Cu;
        // 0x1c4970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4974u;
label_1c4974:
    // 0x1c4974: 0x0  nop
    ctx->pc = 0x1c4974u;
    // NOP
label_1c4978:
    // 0x1c4978: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c497c:
    // 0x1c497c: 0x0  nop
    ctx->pc = 0x1c497cu;
    // NOP
    ctx->pc = 0x1c4980u;
}
