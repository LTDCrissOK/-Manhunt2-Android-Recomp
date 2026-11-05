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

// Function: sub_00195FC8
// Address: 0x195fc8 - 0x196018
void sub_00195FC8_0x195fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195FC8_0x195fc8");
#endif

    switch (ctx->pc) {
        case 0x195fc8u: goto label_195fc8;
        case 0x195fccu: goto label_195fcc;
        case 0x195fd0u: goto label_195fd0;
        case 0x195fd4u: goto label_195fd4;
        case 0x195fd8u: goto label_195fd8;
        case 0x195fdcu: goto label_195fdc;
        case 0x195fe0u: goto label_195fe0;
        case 0x195fe4u: goto label_195fe4;
        case 0x195fe8u: goto label_195fe8;
        case 0x195fecu: goto label_195fec;
        case 0x195ff0u: goto label_195ff0;
        case 0x195ff4u: goto label_195ff4;
        case 0x195ff8u: goto label_195ff8;
        case 0x195ffcu: goto label_195ffc;
        case 0x196000u: goto label_196000;
        case 0x196004u: goto label_196004;
        case 0x196008u: goto label_196008;
        case 0x19600cu: goto label_19600c;
        case 0x196010u: goto label_196010;
        case 0x196014u: goto label_196014;
        default: break;
    }

    ctx->pc = 0x195fc8u;

label_195fc8:
    // 0x195fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195fcc:
    // 0x195fcc: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x195fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_195fd0:
    // 0x195fd0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x195fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_195fd4:
    // 0x195fd4: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x195fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
label_195fd8:
    // 0x195fd8: 0x34a501ff  ori         $a1, $a1, 0x1FF
    ctx->pc = 0x195fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)511);
label_195fdc:
    // 0x195fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195fe0:
    // 0x195fe0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195fe4:
    // 0x195fe4: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x195fe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_195fe8:
    // 0x195fe8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x195fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_195fec:
    // 0x195fec: 0xfc621020  sd          $v0, 0x1020($v1)
    ctx->pc = 0x195fecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
label_195ff0:
    // 0x195ff0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x195ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_195ff4:
    // 0x195ff4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_195ff8:
    if (ctx->pc == 0x195FF8u) {
        ctx->pc = 0x195FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FF4u;
        // 0x195ff8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FFCu;
        goto label_195ffc;
    }
    ctx->pc = 0x195FF4u;
    {
        const bool branch_taken_0x195ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FF4u;
        // 0x195ff8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ff4) {
            ctx->pc = 0x196010u;
            goto label_196010;
        }
    }
    ctx->pc = 0x195FFCu;
label_195ffc:
    // 0x195ffc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x195ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_196000:
    // 0x196000: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_196004:
    // 0x196004: 0x40f809  jalr        $v0
label_196008:
    if (ctx->pc == 0x196008u) {
        ctx->pc = 0x19600Cu;
        goto label_19600c;
    }
    ctx->pc = 0x196004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19600Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196004u, 0x19600Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19600Cu;
label_19600c:
    // 0x19600c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19600cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196010:
    // 0x196010: 0x3e00008  jr          $ra
label_196014:
    if (ctx->pc == 0x196014u) {
        ctx->pc = 0x196014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196010u;
        // 0x196014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196018u;
        goto label_fallthrough_0x196010;
    }
    ctx->pc = 0x196010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196010u;
        // 0x196014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x196010:
    ctx->pc = 0x196018u;
}
