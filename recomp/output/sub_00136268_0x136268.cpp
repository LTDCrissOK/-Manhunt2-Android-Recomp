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

// Function: sub_00136268
// Address: 0x136268 - 0x1362d0
void sub_00136268_0x136268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136268_0x136268");
#endif

    switch (ctx->pc) {
        case 0x136268u: goto label_136268;
        case 0x13626cu: goto label_13626c;
        case 0x136270u: goto label_136270;
        case 0x136274u: goto label_136274;
        case 0x136278u: goto label_136278;
        case 0x13627cu: goto label_13627c;
        case 0x136280u: goto label_136280;
        case 0x136284u: goto label_136284;
        case 0x136288u: goto label_136288;
        case 0x13628cu: goto label_13628c;
        case 0x136290u: goto label_136290;
        case 0x136294u: goto label_136294;
        case 0x136298u: goto label_136298;
        case 0x13629cu: goto label_13629c;
        case 0x1362a0u: goto label_1362a0;
        case 0x1362a4u: goto label_1362a4;
        case 0x1362a8u: goto label_1362a8;
        case 0x1362acu: goto label_1362ac;
        case 0x1362b0u: goto label_1362b0;
        case 0x1362b4u: goto label_1362b4;
        case 0x1362b8u: goto label_1362b8;
        case 0x1362bcu: goto label_1362bc;
        case 0x1362c0u: goto label_1362c0;
        case 0x1362c4u: goto label_1362c4;
        case 0x1362c8u: goto label_1362c8;
        case 0x1362ccu: goto label_1362cc;
        default: break;
    }

    ctx->pc = 0x136268u;

label_136268:
    // 0x136268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13626c:
    // 0x13626c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_136270:
    // 0x136270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_136274:
    // 0x136274: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x136274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136278:
    // 0x136278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13627c:
    // 0x13627c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13627cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136280:
    // 0x136280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136284:
    // 0x136284: 0x0  nop
    ctx->pc = 0x136284u;
    // NOP
label_136288:
    // 0x136288: 0xc04f74a  jal         func_13DD28
label_13628c:
    if (ctx->pc == 0x13628Cu) {
        ctx->pc = 0x13628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136288u;
        // 0x13628c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136290u;
        goto label_136290;
    }
    ctx->pc = 0x136288u;
    SET_GPR_U32(ctx, 31, 0x136290u);
    ctx->pc = 0x13628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136288u;
    // 0x13628c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x136288u, 0x136290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136290u;
label_136290:
    // 0x136290: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_136294:
    // 0x136294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136298:
    // 0x136298: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x136298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_13629c:
    // 0x13629c: 0x40f809  jalr        $v0
label_1362a0:
    if (ctx->pc == 0x1362A0u) {
        ctx->pc = 0x1362A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13629Cu;
        // 0x1362a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362A4u;
        goto label_1362a4;
    }
    ctx->pc = 0x13629Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1362A4u);
        ctx->pc = 0x1362A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13629Cu;
        // 0x1362a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13629Cu, 0x1362A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1362A4u;
label_1362a4:
    // 0x1362a4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1362a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1362a8:
    // 0x1362a8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1362a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1362ac:
    // 0x1362ac: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x1362acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1362b0:
    // 0x1362b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1362b4:
    if (ctx->pc == 0x1362B4u) {
        ctx->pc = 0x1362B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B0u;
        // 0x1362b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362B8u;
        goto label_1362b8;
    }
    ctx->pc = 0x1362B0u;
    {
        const bool branch_taken_0x1362b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1362B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B0u;
        // 0x1362b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362b0) {
            ctx->pc = 0x136288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136288;
        }
    }
    ctx->pc = 0x1362B8u;
label_1362b8:
    // 0x1362b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1362b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1362bc:
    // 0x1362bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1362bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1362c0:
    // 0x1362c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1362c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1362c4:
    // 0x1362c4: 0x3e00008  jr          $ra
label_1362c8:
    if (ctx->pc == 0x1362C8u) {
        ctx->pc = 0x1362C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362C4u;
        // 0x1362c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362CCu;
        goto label_1362cc;
    }
    ctx->pc = 0x1362C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1362C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362C4u;
        // 0x1362c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1362CCu;
label_1362cc:
    // 0x1362cc: 0x0  nop
    ctx->pc = 0x1362ccu;
    // NOP
    ctx->pc = 0x1362d0u;
}
