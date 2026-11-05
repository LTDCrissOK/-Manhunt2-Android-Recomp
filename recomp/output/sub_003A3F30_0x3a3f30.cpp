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

// Function: sub_003A3F30
// Address: 0x3a3f30 - 0x3a3f90
void sub_003A3F30_0x3a3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3F30_0x3a3f30");
#endif

    switch (ctx->pc) {
        case 0x3a3f50u: goto label_3a3f50;
        case 0x3a3f58u: goto label_3a3f58;
        case 0x3a3f6cu: goto label_3a3f6c;
        default: break;
    }

    ctx->pc = 0x3a3f30u;

    // 0x3a3f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a3f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3f38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a3f3c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x3a3f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a3f40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a3f44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a3f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a3f48: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3A3F48u;
    SET_GPR_U32(ctx, 31, 0x3A3F50u);
    ctx->pc = 0x3A3F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3F48u;
    // 0x3a3f4c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3A3F48u, 0x3A3F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3F50u;
label_3a3f50:
    // 0x3a3f50: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3f54: 0x24501e80  addiu       $s0, $v0, 0x1E80
    ctx->pc = 0x3a3f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
label_3a3f58:
    // 0x3a3f58: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a3f58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a3f5c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3F5Cu;
    {
        const bool branch_taken_0x3a3f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a3f5c) {
            ctx->pc = 0x3A3F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3F5Cu;
            // 0x3a3f60: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3F70u;
            goto label_3a3f70;
        }
    }
    ctx->pc = 0x3A3F64u;
    // 0x3a3f64: 0xc0e8ed4  jal         func_3A3B50
    ctx->pc = 0x3A3F64u;
    SET_GPR_U32(ctx, 31, 0x3A3F6Cu);
    ctx->pc = 0x3A3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3F64u;
    // 0x3a3f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B50u, 0x3A3F64u, 0x3A3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3F6Cu;
label_3a3f6c:
    // 0x3a3f6c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a3f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a3f70:
    // 0x3a3f70: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A3F70u;
    {
        const bool branch_taken_0x3a3f70 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F70u;
        // 0x3a3f74: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f70) {
            ctx->pc = 0x3A3F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3f58;
        }
    }
    ctx->pc = 0x3A3F78u;
    // 0x3a3f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3f7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3f80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a3f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3f84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a3f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3f88: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3A3F88u;
    ctx->pc = 0x3A3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3F88u;
    // 0x3a3f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3A3F90u;
}
