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

// Function: sub_003D6238
// Address: 0x3d6238 - 0x3d6288
void sub_003D6238_0x3d6238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6238_0x3d6238");
#endif

    switch (ctx->pc) {
        case 0x3d6240u: goto label_3d6240;
        default: break;
    }

    ctx->pc = 0x3d6238u;

    // 0x3d6238: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d6238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d623c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d623cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6240:
    // 0x3d6240: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3d6240u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d6244: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d6248: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x3d6248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x3d624c: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x3d624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x3d6250: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3d6250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3d6254: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3d6254u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3d6258: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D6258u;
    {
        const bool branch_taken_0x3d6258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6258u;
        // 0x3d625c: 0x24e70007  addiu       $a3, $a3, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6258) {
            ctx->pc = 0x3D6240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6240;
        }
    }
    ctx->pc = 0x3D6260u;
    // 0x3d6260: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x3d6260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3d6264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6264u;
    {
        const bool branch_taken_0x3d6264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6264u;
        // 0x3d6268: 0x30c20040  andi        $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6264) {
            ctx->pc = 0x3D627Cu;
            goto label_3d627c;
        }
    }
    ctx->pc = 0x3D626Cu;
    // 0x3d626c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D626Cu;
    {
        const bool branch_taken_0x3d626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D626Cu;
        // 0x3d6270: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d626c) {
            ctx->pc = 0x3D627Cu;
            goto label_3d627c;
        }
    }
    ctx->pc = 0x3D6274u;
    // 0x3d6274: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3d6274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3d6278: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3d6278u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3d627c:
    // 0x3d627c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x3d627cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x3d6280: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6280u;
        // 0x3d6284: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6288u;
}
