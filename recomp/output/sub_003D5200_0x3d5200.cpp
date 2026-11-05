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

// Function: sub_003D5200
// Address: 0x3d5200 - 0x3d5288
void sub_003D5200_0x3d5200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5200_0x3d5200");
#endif

    switch (ctx->pc) {
        case 0x3d5230u: goto label_3d5230;
        case 0x3d527cu: goto label_3d527c;
        default: break;
    }

    ctx->pc = 0x3d5200u;

    // 0x3d5200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d5200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d5204: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d5204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d520c: 0x24a8029c  addiu       $t0, $a1, 0x29C
    ctx->pc = 0x3d520cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 668));
    // 0x3d5210: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x3d5210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3d5214: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d5214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d5218: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x3d5218u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d521c: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D521Cu;
    {
        const bool branch_taken_0x3d521c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D521Cu;
        // 0x3d5220: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d521c) {
            ctx->pc = 0x3D5250u;
            goto label_3d5250;
        }
    }
    ctx->pc = 0x3D5224u;
    // 0x3d5224: 0x24a70018  addiu       $a3, $a1, 0x18
    ctx->pc = 0x3d5224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x3d5228: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3d5228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3d522c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3d522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d5230:
    // 0x3d5230: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3d5230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3d5234: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3d5234u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5238: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3d5238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d523c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3d523cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3d5240: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3d5240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3d5244: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3d5244u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5248: 0x5064fff9  beql        $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D5248u;
    {
        const bool branch_taken_0x3d5248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3d5248) {
            ctx->pc = 0x3D524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5248u;
            // 0x3d524c: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5230;
        }
    }
    ctx->pc = 0x3D5250u;
label_3d5250:
    // 0x3d5250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d5250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5254: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3d5254u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5258: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D5258u;
    {
        const bool branch_taken_0x3d5258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5258u;
        // 0x3d525c: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5258) {
            ctx->pc = 0x3D5274u;
            goto label_3d5274;
        }
    }
    ctx->pc = 0x3D5260u;
    // 0x3d5260: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3d5260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d5264: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3d5264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d5268: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3d5268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3d526c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D526Cu;
    {
        const bool branch_taken_0x3d526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D526Cu;
        // 0x3d5270: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d526c) {
            ctx->pc = 0x3D527Cu;
            goto label_3d527c;
        }
    }
    ctx->pc = 0x3D5274u;
label_3d5274:
    // 0x3d5274: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x3D5274u;
    SET_GPR_U32(ctx, 31, 0x3D527Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x3D5274u, 0x3D527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D527Cu;
label_3d527c:
    // 0x3d527c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5280: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5280u;
        // 0x3d5284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5288u;
}
