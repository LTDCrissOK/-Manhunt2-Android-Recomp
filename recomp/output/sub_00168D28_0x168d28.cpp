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

// Function: sub_00168D28
// Address: 0x168d28 - 0x168df0
void sub_00168D28_0x168d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168D28_0x168d28");
#endif

    switch (ctx->pc) {
        case 0x168d60u: goto label_168d60;
        case 0x168d74u: goto label_168d74;
        case 0x168da8u: goto label_168da8;
        case 0x168dc8u: goto label_168dc8;
        case 0x168dd0u: goto label_168dd0;
        default: break;
    }

    ctx->pc = 0x168d28u;

    // 0x168d28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168d2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168d34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x168d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168d3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x168d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168d40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168d44: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x168d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x168d48: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x168D48u;
    {
        const bool branch_taken_0x168d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D48u;
        // 0x168d4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d48) {
            ctx->pc = 0x168DD4u;
            goto label_168dd4;
        }
    }
    ctx->pc = 0x168D50u;
    // 0x168d50: 0x96330320  lhu         $s3, 0x320($s1)
    ctx->pc = 0x168d50u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x168d54: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x168D54u;
    {
        const bool branch_taken_0x168d54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D54u;
        // 0x168d58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d54) {
            ctx->pc = 0x168D80u;
            goto label_168d80;
        }
    }
    ctx->pc = 0x168D5Cu;
    // 0x168d5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x168d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168d60:
    // 0x168d60: 0x8e250324  lw          $a1, 0x324($s1)
    ctx->pc = 0x168d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x168d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x168d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x168d6c: 0xc05a37c  jal         func_168DF0
    ctx->pc = 0x168D6Cu;
    SET_GPR_U32(ctx, 31, 0x168D74u);
    ctx->pc = 0x168D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D6Cu;
    // 0x168d70: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168DF0u, 0x168D6Cu, 0x168D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D74u;
label_168d74:
    // 0x168d74: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x168d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x168d78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x168D78u;
    {
        const bool branch_taken_0x168d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D78u;
        // 0x168d7c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d78) {
            ctx->pc = 0x168D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168d60;
        }
    }
    ctx->pc = 0x168D80u;
label_168d80:
    // 0x168d80: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x168d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x168d84: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x168D84u;
    {
        const bool branch_taken_0x168d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D84u;
        // 0x168d88: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d84) {
            ctx->pc = 0x168DC8u;
            goto label_168dc8;
        }
    }
    ctx->pc = 0x168D8Cu;
    // 0x168d8c: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x168d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x168d90: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x168d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x168d94: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x168d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x168d98: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168D98u;
    {
        const bool branch_taken_0x168d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x168D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D98u;
        // 0x168d9c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d98) {
            ctx->pc = 0x168DC0u;
            goto label_168dc0;
        }
    }
    ctx->pc = 0x168DA0u;
    // 0x168da0: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x168da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x168da4: 0x0  nop
    ctx->pc = 0x168da4u;
    // NOP
label_168da8:
    // 0x168da8: 0x0  nop
    ctx->pc = 0x168da8u;
    // NOP
    // 0x168dac: 0x0  nop
    ctx->pc = 0x168dacu;
    // NOP
    // 0x168db0: 0x0  nop
    ctx->pc = 0x168db0u;
    // NOP
    // 0x168db4: 0x0  nop
    ctx->pc = 0x168db4u;
    // NOP
    // 0x168db8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168DB8u;
    {
        const bool branch_taken_0x168db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DB8u;
        // 0x168dbc: 0x2442ffe8  addiu       $v0, $v0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168db8) {
            ctx->pc = 0x168DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168da8;
        }
    }
    ctx->pc = 0x168DC0u;
label_168dc0:
    // 0x168dc0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x168DC0u;
    SET_GPR_U32(ctx, 31, 0x168DC8u);
    ctx->pc = 0x168DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DC0u;
    // 0x168dc4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x168DC0u, 0x168DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DC8u;
label_168dc8:
    // 0x168dc8: 0xc05a31a  jal         func_168C68
    ctx->pc = 0x168DC8u;
    SET_GPR_U32(ctx, 31, 0x168DD0u);
    ctx->pc = 0x168DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DC8u;
    // 0x168dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168C68u, 0x168DC8u, 0x168DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DD0u;
label_168dd0:
    // 0x168dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168dd4:
    // 0x168dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168dd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168de0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168de4: 0x3e00008  jr          $ra
    ctx->pc = 0x168DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DE4u;
        // 0x168de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168DECu;
    // 0x168dec: 0x0  nop
    ctx->pc = 0x168decu;
    // NOP
    ctx->pc = 0x168df0u;
}
