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

// Function: sub_00337470
// Address: 0x337470 - 0x3374f0
void sub_00337470_0x337470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337470_0x337470");
#endif

    switch (ctx->pc) {
        case 0x3374bcu: goto label_3374bc;
        case 0x3374dcu: goto label_3374dc;
        default: break;
    }

    ctx->pc = 0x337470u;

    // 0x337470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x337478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33747c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33747Cu;
    {
        const bool branch_taken_0x33747c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33747Cu;
        // 0x337480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33747c) {
            ctx->pc = 0x33748Cu;
            goto label_33748c;
        }
    }
    ctx->pc = 0x337484u;
    // 0x337484: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x337484u;
    {
        const bool branch_taken_0x337484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337484u;
        // 0x337488: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337484) {
            ctx->pc = 0x3374D4u;
            goto label_3374d4;
        }
    }
    ctx->pc = 0x33748Cu;
label_33748c:
    // 0x33748c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x33748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x337490: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x337490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x337494: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x337494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x337498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337498u;
    {
        const bool branch_taken_0x337498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337498u;
        // 0x33749c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337498) {
            ctx->pc = 0x3374A8u;
            goto label_3374a8;
        }
    }
    ctx->pc = 0x3374A0u;
    // 0x3374a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3374A0u;
    {
        const bool branch_taken_0x3374a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3374A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374A0u;
        // 0x3374a4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374a0) {
            ctx->pc = 0x3374D4u;
            goto label_3374d4;
        }
    }
    ctx->pc = 0x3374A8u;
label_3374a8:
    // 0x3374a8: 0x8ca40274  lw          $a0, 0x274($a1)
    ctx->pc = 0x3374a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x3374ac: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3374ACu;
    {
        const bool branch_taken_0x3374ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3374B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374ACu;
        // 0x3374b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374ac) {
            ctx->pc = 0x3374E0u;
            goto label_3374e0;
        }
    }
    ctx->pc = 0x3374B4u;
    // 0x3374b4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x3374B4u;
    SET_GPR_U32(ctx, 31, 0x3374BCu);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x3374B4u, 0x3374BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374BCu;
label_3374bc:
    // 0x3374bc: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x3374bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x3374c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3374C0u;
    {
        const bool branch_taken_0x3374c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3374C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374C0u;
        // 0x3374c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374c0) {
            ctx->pc = 0x3374D0u;
            goto label_3374d0;
        }
    }
    ctx->pc = 0x3374C8u;
    // 0x3374c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3374C8u;
    {
        const bool branch_taken_0x3374c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3374CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374C8u;
        // 0x3374cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374c8) {
            ctx->pc = 0x3374E0u;
            goto label_3374e0;
        }
    }
    ctx->pc = 0x3374D0u;
label_3374d0:
    // 0x3374d0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3374d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3374d4:
    // 0x3374d4: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3374D4u;
    SET_GPR_U32(ctx, 31, 0x3374DCu);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3374D4u, 0x3374DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374DCu;
label_3374dc:
    // 0x3374dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3374dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3374e0:
    // 0x3374e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3374e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3374e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3374e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3374e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3374E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3374ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374E8u;
        // 0x3374ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3374E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3374F0u;
}
