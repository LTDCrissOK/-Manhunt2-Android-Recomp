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

// Function: sub_002DD920
// Address: 0x2dd920 - 0x2dd9d0
void sub_002DD920_0x2dd920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD920_0x2dd920");
#endif

    switch (ctx->pc) {
        case 0x2dd95cu: goto label_2dd95c;
        case 0x2dd974u: goto label_2dd974;
        case 0x2dd988u: goto label_2dd988;
        case 0x2dd99cu: goto label_2dd99c;
        case 0x2dd9b8u: goto label_2dd9b8;
        default: break;
    }

    ctx->pc = 0x2dd920u;

    // 0x2dd920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd924: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2dd924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2dd928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd92c: 0x24423f68  addiu       $v0, $v0, 0x3F68
    ctx->pc = 0x2dd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16232));
    // 0x2dd930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dd930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dd934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dd93c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2dd93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2dd940: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x2dd940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2dd944: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD944u;
    {
        const bool branch_taken_0x2dd944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD944u;
        // 0x2dd948: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd944) {
            ctx->pc = 0x2DD95Cu;
            goto label_2dd95c;
        }
    }
    ctx->pc = 0x2DD94Cu;
    // 0x2dd94c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dd950: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2dd950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd954: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2DD954u;
    SET_GPR_U32(ctx, 31, 0x2DD95Cu);
    ctx->pc = 0x2DD958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD954u;
    // 0x2dd958: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2DD954u, 0x2DD95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD95Cu;
label_2dd95c:
    // 0x2dd95c: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x2dd95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2dd960: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD960u;
    {
        const bool branch_taken_0x2dd960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd960) {
            ctx->pc = 0x2DD964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD960u;
            // 0x2dd964: 0x8e0500b0  lw          $a1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD978u;
            goto label_2dd978;
        }
    }
    ctx->pc = 0x2DD968u;
    // 0x2dd968: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dd96c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2DD96Cu;
    SET_GPR_U32(ctx, 31, 0x2DD974u);
    ctx->pc = 0x2DD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD96Cu;
    // 0x2dd970: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2DD96Cu, 0x2DD974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD974u;
label_2dd974:
    // 0x2dd974: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x2dd974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2dd978:
    // 0x2dd978: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD978u;
    {
        const bool branch_taken_0x2dd978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD978u;
        // 0x2dd97c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd978) {
            ctx->pc = 0x2DD988u;
            goto label_2dd988;
        }
    }
    ctx->pc = 0x2DD980u;
    // 0x2dd980: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2DD980u;
    SET_GPR_U32(ctx, 31, 0x2DD988u);
    ctx->pc = 0x2DD984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD980u;
    // 0x2dd984: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2DD980u, 0x2DD988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD988u;
label_2dd988:
    // 0x2dd988: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x2dd988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2dd98c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD98Cu;
    {
        const bool branch_taken_0x2dd98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD98Cu;
        // 0x2dd990: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd98c) {
            ctx->pc = 0x2DD9A0u;
            goto label_2dd9a0;
        }
    }
    ctx->pc = 0x2DD994u;
    // 0x2dd994: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x2DD994u;
    SET_GPR_U32(ctx, 31, 0x2DD99Cu);
    ctx->pc = 0x2DD998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD994u;
    // 0x2dd998: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2130u, 0x2DD994u, 0x2DD99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD99Cu;
label_2dd99c:
    // 0x2dd99c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2dd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2dd9a0:
    // 0x2dd9a0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x2dd9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2dd9a4: 0x24423fd0  addiu       $v0, $v0, 0x3FD0
    ctx->pc = 0x2dd9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16336));
    // 0x2dd9a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD9A8u;
    {
        const bool branch_taken_0x2dd9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9A8u;
        // 0x2dd9ac: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9a8) {
            ctx->pc = 0x2DD9B8u;
            goto label_2dd9b8;
        }
    }
    ctx->pc = 0x2DD9B0u;
    // 0x2dd9b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2DD9B0u;
    SET_GPR_U32(ctx, 31, 0x2DD9B8u);
    ctx->pc = 0x2DD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9B0u;
    // 0x2dd9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2DD9B0u, 0x2DD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9B8u;
label_2dd9b8:
    // 0x2dd9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd9bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dd9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd9c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9C4u;
        // 0x2dd9c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD9CCu;
    // 0x2dd9cc: 0x0  nop
    ctx->pc = 0x2dd9ccu;
    // NOP
    ctx->pc = 0x2dd9d0u;
}
