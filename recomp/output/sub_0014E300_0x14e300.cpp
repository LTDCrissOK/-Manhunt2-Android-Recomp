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

// Function: sub_0014E300
// Address: 0x14e300 - 0x14e358
void sub_0014E300_0x14e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E300_0x14e300");
#endif

    switch (ctx->pc) {
        case 0x14e300u: goto label_14e300;
        case 0x14e304u: goto label_14e304;
        case 0x14e308u: goto label_14e308;
        case 0x14e30cu: goto label_14e30c;
        case 0x14e310u: goto label_14e310;
        case 0x14e314u: goto label_14e314;
        case 0x14e318u: goto label_14e318;
        case 0x14e31cu: goto label_14e31c;
        case 0x14e320u: goto label_14e320;
        case 0x14e324u: goto label_14e324;
        case 0x14e328u: goto label_14e328;
        case 0x14e32cu: goto label_14e32c;
        case 0x14e330u: goto label_14e330;
        case 0x14e334u: goto label_14e334;
        case 0x14e338u: goto label_14e338;
        case 0x14e33cu: goto label_14e33c;
        case 0x14e340u: goto label_14e340;
        case 0x14e344u: goto label_14e344;
        case 0x14e348u: goto label_14e348;
        case 0x14e34cu: goto label_14e34c;
        case 0x14e350u: goto label_14e350;
        case 0x14e354u: goto label_14e354;
        default: break;
    }

    ctx->pc = 0x14e300u;

label_14e300:
    // 0x14e300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14e304:
    // 0x14e304: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x14e304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_14e308:
    // 0x14e308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14e30c:
    // 0x14e30c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
label_14e310:
    // 0x14e310: 0x9083046c  lbu         $v1, 0x46C($a0)
    ctx->pc = 0x14e310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
label_14e314:
    // 0x14e314: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x14e314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_14e318:
    // 0x14e318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14e31c:
    // 0x14e31c: 0x8c8708a0  lw          $a3, 0x8A0($a0)
    ctx->pc = 0x14e31cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2208)));
label_14e320:
    // 0x14e320: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14e324:
    // 0x14e324: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e328:
    // 0x14e328: 0x2ce40008  sltiu       $a0, $a3, 0x8
    ctx->pc = 0x14e328u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_14e32c:
    // 0x14e32c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e330:
    // 0x14e330: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14e330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_14e334:
    // 0x14e334: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_14e338:
    if (ctx->pc == 0x14E338u) {
        ctx->pc = 0x14E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E334u;
        // 0x14e338: 0x8ca5020c  lw          $a1, 0x20C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E33Cu;
        goto label_14e33c;
    }
    ctx->pc = 0x14E334u;
    {
        const bool branch_taken_0x14e334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E334u;
        // 0x14e338: 0x8ca5020c  lw          $a1, 0x20C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e334) {
            ctx->pc = 0x14E360u;
            return;
        }
    }
    ctx->pc = 0x14E33Cu;
label_14e33c:
    // 0x14e33c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x14e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_14e340:
    // 0x14e340: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x14e340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_14e344:
    // 0x14e344: 0x2442eab0  addiu       $v0, $v0, -0x1550
    ctx->pc = 0x14e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961840));
label_14e348:
    // 0x14e348: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e34c:
    // 0x14e34c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e350:
    // 0x14e350: 0x800008  jr          $a0
label_14e354:
    if (ctx->pc == 0x14E354u) {
        ctx->pc = 0x14E358u;
        goto label_fallthrough_0x14e350;
    }
    ctx->pc = 0x14E350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E350u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x14e350:
    ctx->pc = 0x14E358u;
}
