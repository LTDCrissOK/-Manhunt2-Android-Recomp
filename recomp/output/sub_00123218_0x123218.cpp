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

// Function: sub_00123218
// Address: 0x123218 - 0x1232a8
void sub_00123218_0x123218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123218_0x123218");
#endif

    switch (ctx->pc) {
        case 0x123248u: goto label_123248;
        case 0x123258u: goto label_123258;
        case 0x123268u: goto label_123268;
        case 0x123280u: goto label_123280;
        default: break;
    }

    ctx->pc = 0x123218u;

    // 0x123218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12321c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123220: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123224: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x123224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12322c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12322cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12323c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12323cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123240: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123240u;
    SET_GPR_U32(ctx, 31, 0x123248u);
    ctx->pc = 0x123244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123240u;
    // 0x123244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123240u, 0x123248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123248u;
label_123248:
    // 0x123248: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x123248u;
    {
        const bool branch_taken_0x123248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123248u;
        // 0x12324c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123248) {
            ctx->pc = 0x12328Cu;
            goto label_12328c;
        }
    }
    ctx->pc = 0x123250u;
    // 0x123250: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123250u;
    SET_GPR_U32(ctx, 31, 0x123258u);
    ctx->pc = 0x123254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123250u;
    // 0x123254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123250u, 0x123258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123258u;
label_123258:
    // 0x123258: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x123258u;
    {
        const bool branch_taken_0x123258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123258u;
        // 0x12325c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123258) {
            ctx->pc = 0x12328Cu;
            goto label_12328c;
        }
    }
    ctx->pc = 0x123260u;
    // 0x123260: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123260u;
    SET_GPR_U32(ctx, 31, 0x123268u);
    ctx->pc = 0x123264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123260u;
    // 0x123264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123260u, 0x123268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123268u;
label_123268:
    // 0x123268: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123268u;
    {
        const bool branch_taken_0x123268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123268u;
        // 0x12326c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123268) {
            ctx->pc = 0x123288u;
            goto label_123288;
        }
    }
    ctx->pc = 0x123270u;
    // 0x123270: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x123270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x123274: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x123274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123278: 0xc042978  jal         func_10A5E0
    ctx->pc = 0x123278u;
    SET_GPR_U32(ctx, 31, 0x123280u);
    ctx->pc = 0x12327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123278u;
    // 0x12327c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A5E0u, 0x123278u, 0x123280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123280u;
label_123280:
    // 0x123280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123280u;
    {
        const bool branch_taken_0x123280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123280u;
        // 0x123284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123280) {
            ctx->pc = 0x123290u;
            goto label_123290;
        }
    }
    ctx->pc = 0x123288u;
label_123288:
    // 0x123288: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12328c:
    // 0x12328c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12328cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123290:
    // 0x123290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123298: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12329c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12329cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1232a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1232A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1232A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232A0u;
        // 0x1232a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1232A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1232A8u;
}
