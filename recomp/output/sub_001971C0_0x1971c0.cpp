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

// Function: sub_001971C0
// Address: 0x1971c0 - 0x197210
void sub_001971C0_0x1971c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001971C0_0x1971c0");
#endif

    switch (ctx->pc) {
        case 0x1971c0u: goto label_1971c0;
        case 0x1971c4u: goto label_1971c4;
        case 0x1971c8u: goto label_1971c8;
        case 0x1971ccu: goto label_1971cc;
        case 0x1971d0u: goto label_1971d0;
        case 0x1971d4u: goto label_1971d4;
        case 0x1971d8u: goto label_1971d8;
        case 0x1971dcu: goto label_1971dc;
        case 0x1971e0u: goto label_1971e0;
        case 0x1971e4u: goto label_1971e4;
        case 0x1971e8u: goto label_1971e8;
        case 0x1971ecu: goto label_1971ec;
        case 0x1971f0u: goto label_1971f0;
        case 0x1971f4u: goto label_1971f4;
        case 0x1971f8u: goto label_1971f8;
        case 0x1971fcu: goto label_1971fc;
        case 0x197200u: goto label_197200;
        case 0x197204u: goto label_197204;
        case 0x197208u: goto label_197208;
        case 0x19720cu: goto label_19720c;
        default: break;
    }

    ctx->pc = 0x1971c0u;

label_1971c0:
    // 0x1971c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1971c4:
    // 0x1971c4: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x1971c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_1971c8:
    // 0x1971c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1971c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1971cc:
    // 0x1971cc: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x1971ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
label_1971d0:
    // 0x1971d0: 0x34a501ff  ori         $a1, $a1, 0x1FF
    ctx->pc = 0x1971d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)511);
label_1971d4:
    // 0x1971d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1971d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1971d8:
    // 0x1971d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1971d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1971dc:
    // 0x1971dc: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x1971dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_1971e0:
    // 0x1971e0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1971e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1971e4:
    // 0x1971e4: 0xfc621020  sd          $v0, 0x1020($v1)
    ctx->pc = 0x1971e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
label_1971e8:
    // 0x1971e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1971e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1971ec:
    // 0x1971ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1971f0:
    if (ctx->pc == 0x1971F0u) {
        ctx->pc = 0x1971F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971ECu;
        // 0x1971f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971F4u;
        goto label_1971f4;
    }
    ctx->pc = 0x1971ECu;
    {
        const bool branch_taken_0x1971ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971ECu;
        // 0x1971f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971ec) {
            ctx->pc = 0x197208u;
            goto label_197208;
        }
    }
    ctx->pc = 0x1971F4u;
label_1971f4:
    // 0x1971f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1971f8:
    // 0x1971f8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1971fc:
    // 0x1971fc: 0x40f809  jalr        $v0
label_197200:
    if (ctx->pc == 0x197200u) {
        ctx->pc = 0x197204u;
        goto label_197204;
    }
    ctx->pc = 0x1971FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197204u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1971FCu, 0x197204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197204u;
label_197204:
    // 0x197204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197208:
    // 0x197208: 0x3e00008  jr          $ra
label_19720c:
    if (ctx->pc == 0x19720Cu) {
        ctx->pc = 0x19720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197208u;
        // 0x19720c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197210u;
        goto label_fallthrough_0x197208;
    }
    ctx->pc = 0x197208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197208u;
        // 0x19720c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197208:
    ctx->pc = 0x197210u;
}
