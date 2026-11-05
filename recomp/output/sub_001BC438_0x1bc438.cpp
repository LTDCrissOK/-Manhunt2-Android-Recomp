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

// Function: sub_001BC438
// Address: 0x1bc438 - 0x1bc4c8
void sub_001BC438_0x1bc438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC438_0x1bc438");
#endif

    switch (ctx->pc) {
        case 0x1bc478u: goto label_1bc478;
        case 0x1bc488u: goto label_1bc488;
        case 0x1bc490u: goto label_1bc490;
        case 0x1bc4a4u: goto label_1bc4a4;
        case 0x1bc4b0u: goto label_1bc4b0;
        default: break;
    }

    ctx->pc = 0x1bc438u;

    // 0x1bc438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc43c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc44c: 0x263000f0  addiu       $s0, $s1, 0xF0
    ctx->pc = 0x1bc44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x1bc450: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bc450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bc454: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BC454u;
    {
        const bool branch_taken_0x1bc454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc454) {
            ctx->pc = 0x1BC458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC454u;
            // 0x1bc458: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC4B4u;
            goto label_1bc4b4;
        }
    }
    ctx->pc = 0x1BC45Cu;
    // 0x1bc45c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bc45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bc460: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1bc460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bc464: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1bc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bc468: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC468u;
    {
        const bool branch_taken_0x1bc468 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc468) {
            ctx->pc = 0x1BC46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC468u;
            // 0x1bc46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC480u;
            goto label_1bc480;
        }
    }
    ctx->pc = 0x1BC470u;
    // 0x1bc470: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1BC470u;
    SET_GPR_U32(ctx, 31, 0x1BC478u);
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1BC470u, 0x1BC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC478u;
label_1bc478:
    // 0x1bc478: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1bc478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bc47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc480:
    // 0x1bc480: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1BC480u;
    SET_GPR_U32(ctx, 31, 0x1BC488u);
    ctx->pc = 0x1BC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC480u;
    // 0x1bc484: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1BC480u, 0x1BC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC488u;
label_1bc488:
    // 0x1bc488: 0xc095368  jal         func_254DA0
    ctx->pc = 0x1BC488u;
    SET_GPR_U32(ctx, 31, 0x1BC490u);
    ctx->pc = 0x1BC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC488u;
    // 0x1bc48c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x1BC488u, 0x1BC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC490u;
label_1bc490:
    // 0x1bc490: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bc494: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC494u;
    {
        const bool branch_taken_0x1bc494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc494) {
            ctx->pc = 0x1BC498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC494u;
            // 0x1bc498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC4B4u;
            goto label_1bc4b4;
        }
    }
    ctx->pc = 0x1BC49Cu;
    // 0x1bc49c: 0xc095368  jal         func_254DA0
    ctx->pc = 0x1BC49Cu;
    SET_GPR_U32(ctx, 31, 0x1BC4A4u);
    ctx->pc = 0x1BC4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC49Cu;
    // 0x1bc4a0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x1BC49Cu, 0x1BC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4A4u;
label_1bc4a4:
    // 0x1bc4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4a8: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x1BC4A8u;
    SET_GPR_U32(ctx, 31, 0x1BC4B0u);
    ctx->pc = 0x1BC4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4A8u;
    // 0x1bc4ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1BC4A8u, 0x1BC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4B0u;
label_1bc4b0:
    // 0x1bc4b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc4b4:
    // 0x1bc4b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc4b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4BCu;
        // 0x1bc4c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC4C4u;
    // 0x1bc4c4: 0x0  nop
    ctx->pc = 0x1bc4c4u;
    // NOP
    ctx->pc = 0x1bc4c8u;
}
