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

// Function: sub_00144510
// Address: 0x144510 - 0x144590
void sub_00144510_0x144510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144510_0x144510");
#endif

    switch (ctx->pc) {
        case 0x14455cu: goto label_14455c;
        case 0x14456cu: goto label_14456c;
        default: break;
    }

    ctx->pc = 0x144510u;

    // 0x144510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x144518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14451c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14451cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144524: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x144524u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x144528: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x144528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14452c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14452cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x144530: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x144530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x144534: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x144534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x144538: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x144538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14453c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144540: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x144540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144544: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x144544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144548: 0x8c840108  lw          $a0, 0x108($a0)
    ctx->pc = 0x144548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x14454c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14454Cu;
    {
        const bool branch_taken_0x14454c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14454Cu;
        // 0x144550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14454c) {
            ctx->pc = 0x144578u;
            goto label_144578;
        }
    }
    ctx->pc = 0x144554u;
    // 0x144554: 0xc09522a  jal         func_2548A8
    ctx->pc = 0x144554u;
    SET_GPR_U32(ctx, 31, 0x14455Cu);
    ctx->pc = 0x2548A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A8u, 0x144554u, 0x14455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14455Cu;
label_14455c:
    // 0x14455c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14455Cu;
    {
        const bool branch_taken_0x14455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14455Cu;
        // 0x144560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14455c) {
            ctx->pc = 0x144574u;
            goto label_144574;
        }
    }
    ctx->pc = 0x144564u;
    // 0x144564: 0xc04ebba  jal         func_13AEE8
    ctx->pc = 0x144564u;
    SET_GPR_U32(ctx, 31, 0x14456Cu);
    ctx->pc = 0x144568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144564u;
    // 0x144568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEE8u, 0x144564u, 0x14456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14456Cu;
label_14456c:
    // 0x14456c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14456Cu;
    {
        const bool branch_taken_0x14456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14456Cu;
        // 0x144570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14456c) {
            ctx->pc = 0x14457Cu;
            goto label_14457c;
        }
    }
    ctx->pc = 0x144574u;
label_144574:
    // 0x144574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144578:
    // 0x144578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14457c:
    // 0x14457c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14457cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144584: 0x3e00008  jr          $ra
    ctx->pc = 0x144584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144584u;
        // 0x144588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14458Cu;
    // 0x14458c: 0x0  nop
    ctx->pc = 0x14458cu;
    // NOP
    ctx->pc = 0x144590u;
}
