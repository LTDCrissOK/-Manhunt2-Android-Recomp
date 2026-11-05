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

// Function: sub_00337350
// Address: 0x337350 - 0x3373c8
void sub_00337350_0x337350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337350_0x337350");
#endif

    switch (ctx->pc) {
        case 0x3373b0u: goto label_3373b0;
        default: break;
    }

    ctx->pc = 0x337350u;

    // 0x337350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337354: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337354u;
    {
        const bool branch_taken_0x337354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337354u;
        // 0x337358: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337354) {
            ctx->pc = 0x337364u;
            goto label_337364;
        }
    }
    ctx->pc = 0x33735Cu;
    // 0x33735c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33735Cu;
    {
        const bool branch_taken_0x33735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33735Cu;
        // 0x337360: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33735c) {
            ctx->pc = 0x3373A8u;
            goto label_3373a8;
        }
    }
    ctx->pc = 0x337364u;
label_337364:
    // 0x337364: 0x8ca500bc  lw          $a1, 0xBC($a1)
    ctx->pc = 0x337364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x337368: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x337368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x33736c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x33736cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x337370: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x337370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x337374: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x337374u;
    {
        const bool branch_taken_0x337374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337374u;
        // 0x337378: 0x30a20401  andi        $v0, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337374) {
            ctx->pc = 0x3373B8u;
            goto label_3373b8;
        }
    }
    ctx->pc = 0x33737Cu;
    // 0x33737c: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x33737cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x337380: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x337380u;
    {
        const bool branch_taken_0x337380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337380u;
        // 0x337384: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337380) {
            ctx->pc = 0x3373B8u;
            goto label_3373b8;
        }
    }
    ctx->pc = 0x337388u;
    // 0x337388: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x337388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x33738c: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x33738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x337390: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x337390u;
    {
        const bool branch_taken_0x337390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337390u;
        // 0x337394: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337390) {
            ctx->pc = 0x3373B8u;
            goto label_3373b8;
        }
    }
    ctx->pc = 0x337398u;
    // 0x337398: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x337398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x33739c: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x33739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3373a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3373A0u;
    {
        const bool branch_taken_0x3373a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3373A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373A0u;
        // 0x3373a4: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373a0) {
            ctx->pc = 0x3373B8u;
            goto label_3373b8;
        }
    }
    ctx->pc = 0x3373A8u;
label_3373a8:
    // 0x3373a8: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3373A8u;
    SET_GPR_U32(ctx, 31, 0x3373B0u);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3373A8u, 0x3373B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373B0u;
label_3373b0:
    // 0x3373b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3373B0u;
    {
        const bool branch_taken_0x3373b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3373B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373B0u;
        // 0x3373b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373b0) {
            ctx->pc = 0x3373BCu;
            goto label_3373bc;
        }
    }
    ctx->pc = 0x3373B8u;
label_3373b8:
    // 0x3373b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3373bc:
    // 0x3373bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3373bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3373c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3373C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3373C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373C0u;
        // 0x3373c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3373C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3373C8u;
}
