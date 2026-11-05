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

// Function: sub_00336E60
// Address: 0x336e60 - 0x336ee8
void sub_00336E60_0x336e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336E60_0x336e60");
#endif

    switch (ctx->pc) {
        case 0x336e94u: goto label_336e94;
        case 0x336ec4u: goto label_336ec4;
        default: break;
    }

    ctx->pc = 0x336e60u;

    // 0x336e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336e68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336e6c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x336e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x336e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336e78: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x336e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x336e7c: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x336e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x336e80: 0xae2a0020  sw          $t2, 0x20($s1)
    ctx->pc = 0x336e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 10));
    // 0x336e84: 0xae260030  sw          $a2, 0x30($s1)
    ctx->pc = 0x336e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
    // 0x336e88: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x336e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x336e8c: 0xc0d75e8  jal         func_35D7A0
    ctx->pc = 0x336E8Cu;
    SET_GPR_U32(ctx, 31, 0x336E94u);
    ctx->pc = 0x336E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E8Cu;
    // 0x336e90: 0xae280034  sw          $t0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7A0u, 0x336E8Cu, 0x336E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336E94u;
label_336e94:
    // 0x336e94: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x336e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x336e98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x336e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x336e9c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x336e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x336ea0: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x336ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x336ea4: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x336ea4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x336ea8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x336ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x336eac: 0x108083  sra         $s0, $s0, 2
    ctx->pc = 0x336eacu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
    // 0x336eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x336eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336eb4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x336eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x336eb8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x336eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x336ebc: 0xc0cdbba  jal         func_336EE8
    ctx->pc = 0x336EBCu;
    SET_GPR_U32(ctx, 31, 0x336EC4u);
    ctx->pc = 0x336EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336EBCu;
    // 0x336ec0: 0xae23007c  sw          $v1, 0x7C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE8u, 0x336EBCu, 0x336EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336EC4u;
label_336ec4:
    // 0x336ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336ecc: 0xae22049c  sw          $v0, 0x49C($s1)
    ctx->pc = 0x336eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1180), GPR_U32(ctx, 2));
    // 0x336ed0: 0xae220498  sw          $v0, 0x498($s1)
    ctx->pc = 0x336ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
    // 0x336ed4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336edc: 0x3e00008  jr          $ra
    ctx->pc = 0x336EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336EDCu;
        // 0x336ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336EE4u;
    // 0x336ee4: 0x0  nop
    ctx->pc = 0x336ee4u;
    // NOP
    ctx->pc = 0x336ee8u;
}
