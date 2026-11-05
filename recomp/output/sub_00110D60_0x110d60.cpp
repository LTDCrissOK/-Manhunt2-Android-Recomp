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

// Function: sub_00110D60
// Address: 0x110d60 - 0x110df8
void sub_00110D60_0x110d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110D60_0x110d60");
#endif

    switch (ctx->pc) {
        case 0x110dc8u: goto label_110dc8;
        default: break;
    }

    ctx->pc = 0x110d60u;

    // 0x110d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110d68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x110d6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110d70: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x110d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x110d74: 0x2c62004c  sltiu       $v0, $v1, 0x4C
    ctx->pc = 0x110d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x110d78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x110D78u;
    {
        const bool branch_taken_0x110d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D78u;
        // 0x110d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d78) {
            ctx->pc = 0x110DA8u;
            goto label_110da8;
        }
    }
    ctx->pc = 0x110D80u;
    // 0x110d80: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x110d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x110d84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110d88: 0x2442a830  addiu       $v0, $v0, -0x57D0
    ctx->pc = 0x110d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944816));
    // 0x110d8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110d90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x110d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110d94: 0x800008  jr          $a0
    ctx->pc = 0x110D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110D9Cu: goto label_110d9c;
            case 0x110DA4u: goto label_110da4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x110D9Cu;
label_110d9c:
    // 0x110d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110D9Cu;
    {
        const bool branch_taken_0x110d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D9Cu;
        // 0x110da0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d9c) {
            ctx->pc = 0x110DA8u;
            goto label_110da8;
        }
    }
    ctx->pc = 0x110DA4u;
label_110da4:
    // 0x110da4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110da8:
    // 0x110da8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x110da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x110dac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110DACu;
    {
        const bool branch_taken_0x110dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DACu;
        // 0x110db0: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dac) {
            ctx->pc = 0x110DBCu;
            goto label_110dbc;
        }
    }
    ctx->pc = 0x110DB4u;
    // 0x110db4: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x110db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x110db8: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x110db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_110dbc:
    // 0x110dbc: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x110dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x110dc0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x110DC0u;
    SET_GPR_U32(ctx, 31, 0x110DC8u);
    ctx->pc = 0x110DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DC0u;
    // 0x110dc4: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x110DC0u, 0x110DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DC8u;
label_110dc8:
    // 0x110dc8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x110dc8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x110dcc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x110DCCu;
    {
        const bool branch_taken_0x110dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x110dcc) {
            ctx->pc = 0x110DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110DCCu;
            // 0x110dd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x110DD4u;
            goto label_110dd4;
        }
    }
    ctx->pc = 0x110DD4u;
label_110dd4:
    // 0x110dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110ddc: 0x1010  mfhi        $v0
    ctx->pc = 0x110ddcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x110de0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x110de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x110de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110de8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x110de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x110dec: 0x3e00008  jr          $ra
    ctx->pc = 0x110DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DECu;
        // 0x110df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110DF4u;
    // 0x110df4: 0x0  nop
    ctx->pc = 0x110df4u;
    // NOP
    ctx->pc = 0x110df8u;
}
