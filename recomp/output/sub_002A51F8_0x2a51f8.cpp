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

// Function: sub_002A51F8
// Address: 0x2a51f8 - 0x2a5268
void sub_002A51F8_0x2a51f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A51F8_0x2a51f8");
#endif

    switch (ctx->pc) {
        case 0x2a5220u: goto label_2a5220;
        case 0x2a522cu: goto label_2a522c;
        default: break;
    }

    ctx->pc = 0x2a51f8u;

    // 0x2a51f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a51f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a51fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a51fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a5200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a5204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5208: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a5208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a520c: 0x24910078  addiu       $s1, $a0, 0x78
    ctx->pc = 0x2a520cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x2a5210: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a5210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a5214: 0x26120a80  addiu       $s2, $s0, 0xA80
    ctx->pc = 0x2a5214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2688));
    // 0x2a5218: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a521c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a521cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5220:
    // 0x2a5220: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2a5220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a5224: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A5224u;
    SET_GPR_U32(ctx, 31, 0x2A522Cu);
    ctx->pc = 0x2A5228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5224u;
    // 0x2a5228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A5224u, 0x2A522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A522Cu;
label_2a522c:
    // 0x2a522c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a5230: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5230u;
    {
        const bool branch_taken_0x2a5230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5230u;
        // 0x2a5234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5230) {
            ctx->pc = 0x2A524Cu;
            goto label_2a524c;
        }
    }
    ctx->pc = 0x2A5238u;
    // 0x2a5238: 0x261001c0  addiu       $s0, $s0, 0x1C0
    ctx->pc = 0x2a5238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x2a523c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2a523cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2a5240: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A5240u;
    {
        const bool branch_taken_0x2a5240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5240u;
        // 0x2a5244: 0x263101c0  addiu       $s1, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5240) {
            ctx->pc = 0x2A5220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5220;
        }
    }
    ctx->pc = 0x2A5248u;
    // 0x2a5248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a5248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a524c:
    // 0x2a524c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a524cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a5250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a5254: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a5254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5258: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a5258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a525c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5260: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5260u;
        // 0x2a5264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5268u;
}
