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

// Function: sub_0016A520
// Address: 0x16a520 - 0x16a590
void sub_0016A520_0x16a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A520_0x16a520");
#endif

    switch (ctx->pc) {
        case 0x16a558u: goto label_16a558;
        case 0x16a568u: goto label_16a568;
        case 0x16a578u: goto label_16a578;
        default: break;
    }

    ctx->pc = 0x16a520u;

    // 0x16a520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a52c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a530: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a534: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x16a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a538: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x16a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x16a53c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A53Cu;
    {
        const bool branch_taken_0x16a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A53Cu;
        // 0x16a540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a53c) {
            ctx->pc = 0x16A550u;
            goto label_16a550;
        }
    }
    ctx->pc = 0x16A544u;
    // 0x16a544: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x16a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x16a548: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A548u;
    {
        const bool branch_taken_0x16a548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a548) {
            ctx->pc = 0x16A570u;
            goto label_16a570;
        }
    }
    ctx->pc = 0x16A550u;
label_16a550:
    // 0x16a550: 0xc05abe0  jal         func_16AF80
    ctx->pc = 0x16A550u;
    SET_GPR_U32(ctx, 31, 0x16A558u);
    ctx->pc = 0x16A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A550u;
    // 0x16a554: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF80u, 0x16A550u, 0x16A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A558u;
label_16a558:
    // 0x16a558: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a55c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a560: 0xc046304  jal         func_118C10
    ctx->pc = 0x16A560u;
    SET_GPR_U32(ctx, 31, 0x16A568u);
    ctx->pc = 0x16A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A560u;
    // 0x16a564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x16A560u, 0x16A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A568u;
label_16a568:
    // 0x16a568: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A568u;
    {
        const bool branch_taken_0x16a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A568u;
        // 0x16a56c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a568) {
            ctx->pc = 0x16A578u;
            goto label_16a578;
        }
    }
    ctx->pc = 0x16A570u;
label_16a570:
    // 0x16a570: 0xc05abf0  jal         func_16AFC0
    ctx->pc = 0x16A570u;
    SET_GPR_U32(ctx, 31, 0x16A578u);
    ctx->pc = 0x16A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A570u;
    // 0x16a574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AFC0u, 0x16A570u, 0x16A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A578u;
label_16a578:
    // 0x16a578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a57c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a584: 0x3e00008  jr          $ra
    ctx->pc = 0x16A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A584u;
        // 0x16a588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A58Cu;
    // 0x16a58c: 0x0  nop
    ctx->pc = 0x16a58cu;
    // NOP
    ctx->pc = 0x16a590u;
}
