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

// Function: sub_0013E300
// Address: 0x13e300 - 0x13e368
void sub_0013E300_0x13e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E300_0x13e300");
#endif

    switch (ctx->pc) {
        case 0x13e300u: goto label_13e300;
        case 0x13e304u: goto label_13e304;
        case 0x13e308u: goto label_13e308;
        case 0x13e30cu: goto label_13e30c;
        case 0x13e310u: goto label_13e310;
        case 0x13e314u: goto label_13e314;
        case 0x13e318u: goto label_13e318;
        case 0x13e31cu: goto label_13e31c;
        case 0x13e320u: goto label_13e320;
        case 0x13e324u: goto label_13e324;
        case 0x13e328u: goto label_13e328;
        case 0x13e32cu: goto label_13e32c;
        case 0x13e330u: goto label_13e330;
        case 0x13e334u: goto label_13e334;
        case 0x13e338u: goto label_13e338;
        case 0x13e33cu: goto label_13e33c;
        case 0x13e340u: goto label_13e340;
        case 0x13e344u: goto label_13e344;
        case 0x13e348u: goto label_13e348;
        case 0x13e34cu: goto label_13e34c;
        case 0x13e350u: goto label_13e350;
        case 0x13e354u: goto label_13e354;
        case 0x13e358u: goto label_13e358;
        case 0x13e35cu: goto label_13e35c;
        case 0x13e360u: goto label_13e360;
        case 0x13e364u: goto label_13e364;
        default: break;
    }

    ctx->pc = 0x13e300u;

label_13e300:
    // 0x13e300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e304:
    // 0x13e304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e308:
    // 0x13e308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e30c:
    // 0x13e30c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13e30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e310:
    // 0x13e310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e314:
    // 0x13e314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e318:
    // 0x13e318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e31c:
    // 0x13e31c: 0x0  nop
    ctx->pc = 0x13e31cu;
    // NOP
label_13e320:
    // 0x13e320: 0xc04f74a  jal         func_13DD28
label_13e324:
    if (ctx->pc == 0x13E324u) {
        ctx->pc = 0x13E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E320u;
        // 0x13e324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E328u;
        goto label_13e328;
    }
    ctx->pc = 0x13E320u;
    SET_GPR_U32(ctx, 31, 0x13E328u);
    ctx->pc = 0x13E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E320u;
    // 0x13e324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x13E320u, 0x13E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E328u;
label_13e328:
    // 0x13e328: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13e32c:
    // 0x13e32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e330:
    // 0x13e330: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_13e334:
    // 0x13e334: 0x40f809  jalr        $v0
label_13e338:
    if (ctx->pc == 0x13E338u) {
        ctx->pc = 0x13E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E334u;
        // 0x13e338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E33Cu;
        goto label_13e33c;
    }
    ctx->pc = 0x13E334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E33Cu);
        ctx->pc = 0x13E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E334u;
        // 0x13e338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E334u, 0x13E33Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E33Cu;
label_13e33c:
    // 0x13e33c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13e340:
    // 0x13e340: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x13e340u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_13e344:
    // 0x13e344: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x13e344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_13e348:
    // 0x13e348: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_13e34c:
    if (ctx->pc == 0x13E34Cu) {
        ctx->pc = 0x13E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E348u;
        // 0x13e34c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E350u;
        goto label_13e350;
    }
    ctx->pc = 0x13E348u;
    {
        const bool branch_taken_0x13e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E348u;
        // 0x13e34c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e348) {
            ctx->pc = 0x13E320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e320;
        }
    }
    ctx->pc = 0x13E350u;
label_13e350:
    // 0x13e350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e354:
    // 0x13e354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e358:
    // 0x13e358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e35c:
    // 0x13e35c: 0x3e00008  jr          $ra
label_13e360:
    if (ctx->pc == 0x13E360u) {
        ctx->pc = 0x13E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E35Cu;
        // 0x13e360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E364u;
        goto label_13e364;
    }
    ctx->pc = 0x13E35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E35Cu;
        // 0x13e360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E364u;
label_13e364:
    // 0x13e364: 0x0  nop
    ctx->pc = 0x13e364u;
    // NOP
    ctx->pc = 0x13e368u;
}
