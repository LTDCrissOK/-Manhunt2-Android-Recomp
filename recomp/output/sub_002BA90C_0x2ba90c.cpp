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

// Function: sub_002BA90C
// Address: 0x2ba90c - 0x2ba98c
void sub_002BA90C_0x2ba90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA90C_0x2ba90c");
#endif

    switch (ctx->pc) {
        case 0x2ba91cu: goto label_2ba91c;
        case 0x2ba924u: goto label_2ba924;
        case 0x2ba950u: goto label_2ba950;
        case 0x2ba95cu: goto label_2ba95c;
        default: break;
    }

    ctx->pc = 0x2ba90cu;

    // 0x2ba90c: 0x24a2ff9f  addiu       $v0, $a1, -0x61
    ctx->pc = 0x2ba90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x2ba910: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2ba910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2ba914: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BA914u;
    {
        const bool branch_taken_0x2ba914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA914u;
        // 0x2ba918: 0x24a2ffe0  addiu       $v0, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba914) {
            ctx->pc = 0x2BA98Cu;
            return;
        }
    }
    ctx->pc = 0x2BA91Cu;
label_2ba91c:
    // 0x2ba91c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA91Cu;
        // 0x2ba920: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA924u;
label_2ba924:
    // 0x2ba924: 0x24a2ff9f  addiu       $v0, $a1, -0x61
    ctx->pc = 0x2ba924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x2ba928: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2ba928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2ba92c: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BA92Cu;
    {
        const bool branch_taken_0x2ba92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA92Cu;
        // 0x2ba930: 0x24a2ffe0  addiu       $v0, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba92c) {
            ctx->pc = 0x2BA91Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba91c;
        }
    }
    ctx->pc = 0x2BA934u;
    // 0x2ba934: 0x24a3ff80  addiu       $v1, $a1, -0x80
    ctx->pc = 0x2ba934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x2ba938: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ba938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba93c: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2ba93cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ba940: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BA940u;
    {
        const bool branch_taken_0x2ba940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA940u;
        // 0x2ba944: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba940) {
            ctx->pc = 0x2BA98Cu;
            return;
        }
    }
    ctx->pc = 0x2BA948u;
    // 0x2ba948: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ba948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ba94c: 0x2442aeb8  addiu       $v0, $v0, -0x5148
    ctx->pc = 0x2ba94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946488));
label_2ba950:
    // 0x2ba950: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ba950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ba954: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA954u;
        // 0x2ba958: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA95Cu;
label_2ba95c:
    // 0x2ba95c: 0x24a2ff9f  addiu       $v0, $a1, -0x61
    ctx->pc = 0x2ba95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x2ba960: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2ba960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2ba964: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2BA964u;
    {
        const bool branch_taken_0x2ba964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA964u;
        // 0x2ba968: 0x24a2ffe0  addiu       $v0, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba964) {
            ctx->pc = 0x2BA91Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba91c;
        }
    }
    ctx->pc = 0x2BA96Cu;
    // 0x2ba96c: 0x24a3ff80  addiu       $v1, $a1, -0x80
    ctx->pc = 0x2ba96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x2ba970: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ba970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba974: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2ba974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ba978: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA978u;
    {
        const bool branch_taken_0x2ba978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA978u;
        // 0x2ba97c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba978) {
            ctx->pc = 0x2BA98Cu;
            return;
        }
    }
    ctx->pc = 0x2BA980u;
    // 0x2ba980: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ba980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ba984: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2BA984u;
    {
        const bool branch_taken_0x2ba984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA984u;
        // 0x2ba988: 0x2442adb8  addiu       $v0, $v0, -0x5248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba984) {
            ctx->pc = 0x2BA950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba950;
        }
    }
    ctx->pc = 0x2BA98Cu;
}
