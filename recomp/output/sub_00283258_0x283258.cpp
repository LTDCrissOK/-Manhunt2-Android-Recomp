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

// Function: sub_00283258
// Address: 0x283258 - 0x2832c8
void sub_00283258_0x283258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283258_0x283258");
#endif

    switch (ctx->pc) {
        case 0x283278u: goto label_283278;
        case 0x283290u: goto label_283290;
        default: break;
    }

    ctx->pc = 0x283258u;

    // 0x283258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28325c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x283260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x283264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x283264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28326c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283270: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x283270u;
    SET_GPR_U32(ctx, 31, 0x283278u);
    ctx->pc = 0x283274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283270u;
    // 0x283274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x283270u, 0x283278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283278u;
label_283278:
    // 0x283278: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x283278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28327c: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x28327Cu;
    {
        const bool branch_taken_0x28327c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x283280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28327Cu;
        // 0x283280: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28327c) {
            ctx->pc = 0x2832ACu;
            goto label_2832ac;
        }
    }
    ctx->pc = 0x283284u;
    // 0x283284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283288: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x283288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28328c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x28328cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_283290:
    // 0x283290: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x283290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283294: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x283294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x283298: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x283298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x28329c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x28329cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2832a0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2832A0u;
    {
        const bool branch_taken_0x2832a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2832A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832A0u;
        // 0x2832a4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832a0) {
            ctx->pc = 0x283290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283290;
        }
    }
    ctx->pc = 0x2832A8u;
    // 0x2832a8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2832a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2832ac:
    // 0x2832ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2832acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2832b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2832b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2832b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2832b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2832b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2832b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2832bc: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2832bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2832c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2832C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2832C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832C0u;
        // 0x2832c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2832C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2832C8u;
}
