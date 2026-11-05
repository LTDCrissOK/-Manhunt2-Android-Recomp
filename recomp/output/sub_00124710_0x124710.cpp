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

// Function: sub_00124710
// Address: 0x124710 - 0x124770
void sub_00124710_0x124710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124710_0x124710");
#endif

    switch (ctx->pc) {
        case 0x124730u: goto label_124730;
        case 0x12474cu: goto label_12474c;
        default: break;
    }

    ctx->pc = 0x124710u;

    // 0x124710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124718: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12471c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12471cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124720: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x124720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124728: 0xc04a312  jal         func_128C48
    ctx->pc = 0x124728u;
    SET_GPR_U32(ctx, 31, 0x124730u);
    ctx->pc = 0x12472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124728u;
    // 0x12472c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C48u, 0x124728u, 0x124730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124730u;
label_124730:
    // 0x124730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124734: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x124734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x124738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12473c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12473Cu;
    {
        const bool branch_taken_0x12473c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x124740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12473Cu;
        // 0x124740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12473c) {
            ctx->pc = 0x124754u;
            goto label_124754;
        }
    }
    ctx->pc = 0x124744u;
    // 0x124744: 0xc084a5e  jal         func_212978
    ctx->pc = 0x124744u;
    SET_GPR_U32(ctx, 31, 0x12474Cu);
    ctx->pc = 0x124748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124744u;
    // 0x124748: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212978u, 0x124744u, 0x12474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12474Cu;
label_12474c:
    // 0x12474c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12474Cu;
    {
        const bool branch_taken_0x12474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12474Cu;
        // 0x124750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12474c) {
            ctx->pc = 0x12475Cu;
            goto label_12475c;
        }
    }
    ctx->pc = 0x124754u;
label_124754:
    // 0x124754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12475c:
    // 0x12475c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12475cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124764: 0x3e00008  jr          $ra
    ctx->pc = 0x124764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124764u;
        // 0x124768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12476Cu;
    // 0x12476c: 0x0  nop
    ctx->pc = 0x12476cu;
    // NOP
    ctx->pc = 0x124770u;
}
