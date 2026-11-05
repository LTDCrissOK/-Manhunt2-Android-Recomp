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

// Function: sub_00205920
// Address: 0x205920 - 0x205980
void sub_00205920_0x205920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205920_0x205920");
#endif

    switch (ctx->pc) {
        case 0x205920u: goto label_205920;
        case 0x205924u: goto label_205924;
        case 0x205928u: goto label_205928;
        case 0x20592cu: goto label_20592c;
        case 0x205930u: goto label_205930;
        case 0x205934u: goto label_205934;
        case 0x205938u: goto label_205938;
        case 0x20593cu: goto label_20593c;
        case 0x205940u: goto label_205940;
        case 0x205944u: goto label_205944;
        case 0x205948u: goto label_205948;
        case 0x20594cu: goto label_20594c;
        case 0x205950u: goto label_205950;
        case 0x205954u: goto label_205954;
        case 0x205958u: goto label_205958;
        case 0x20595cu: goto label_20595c;
        case 0x205960u: goto label_205960;
        case 0x205964u: goto label_205964;
        case 0x205968u: goto label_205968;
        case 0x20596cu: goto label_20596c;
        case 0x205970u: goto label_205970;
        case 0x205974u: goto label_205974;
        case 0x205978u: goto label_205978;
        case 0x20597cu: goto label_20597c;
        default: break;
    }

    ctx->pc = 0x205920u;

label_205920:
    // 0x205920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_205924:
    // 0x205924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_205928:
    // 0x205928: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20592c:
    // 0x20592c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20592cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205930:
    // 0x205930: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_205934:
    // 0x205934: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_205938:
    if (ctx->pc == 0x205938u) {
        ctx->pc = 0x205938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205934u;
        // 0x205938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20593Cu;
        goto label_20593c;
    }
    ctx->pc = 0x205934u;
    {
        const bool branch_taken_0x205934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205934) {
            ctx->pc = 0x205938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205934u;
            // 0x205938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205974u;
            goto label_205974;
        }
    }
    ctx->pc = 0x20593Cu;
label_20593c:
    // 0x20593c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205940:
    // 0x205940: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x205940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_205944:
    // 0x205944: 0x40f809  jalr        $v0
label_205948:
    if (ctx->pc == 0x205948u) {
        ctx->pc = 0x20594Cu;
        goto label_20594c;
    }
    ctx->pc = 0x205944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20594Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205944u, 0x20594Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20594Cu;
label_20594c:
    // 0x20594c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_205950:
    if (ctx->pc == 0x205950u) {
        ctx->pc = 0x205950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20594Cu;
        // 0x205950: 0x86020006  lh          $v0, 0x6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205954u;
        goto label_205954;
    }
    ctx->pc = 0x20594Cu;
    {
        const bool branch_taken_0x20594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20594c) {
            ctx->pc = 0x205950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20594Cu;
            // 0x205950: 0x86020006  lh          $v0, 0x6($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205960u;
            goto label_205960;
        }
    }
    ctx->pc = 0x205954u;
label_205954:
    // 0x205954: 0xc0e7d84  jal         func_39F610
label_205958:
    if (ctx->pc == 0x205958u) {
        ctx->pc = 0x205958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205954u;
        // 0x205958: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20595Cu;
        goto label_20595c;
    }
    ctx->pc = 0x205954u;
    SET_GPR_U32(ctx, 31, 0x20595Cu);
    ctx->pc = 0x205958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205954u;
    // 0x205958: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F610u, 0x205954u, 0x20595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20595Cu;
label_20595c:
    // 0x20595c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x20595cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_205960:
    // 0x205960: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_205964:
    if (ctx->pc == 0x205964u) {
        ctx->pc = 0x205964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205960u;
        // 0x205964: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205968u;
        goto label_205968;
    }
    ctx->pc = 0x205960u;
    {
        const bool branch_taken_0x205960 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x205960) {
            ctx->pc = 0x205964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205960u;
            // 0x205964: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205974u;
            goto label_205974;
        }
    }
    ctx->pc = 0x205968u;
label_205968:
    // 0x205968: 0xc0d73fc  jal         func_35CFF0
label_20596c:
    if (ctx->pc == 0x20596Cu) {
        ctx->pc = 0x20596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205968u;
        // 0x20596c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205970u;
        goto label_205970;
    }
    ctx->pc = 0x205968u;
    SET_GPR_U32(ctx, 31, 0x205970u);
    ctx->pc = 0x20596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205968u;
    // 0x20596c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x205968u, 0x205970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205970u;
label_205970:
    // 0x205970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205974:
    // 0x205974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_205978:
    // 0x205978: 0x3e00008  jr          $ra
label_20597c:
    if (ctx->pc == 0x20597Cu) {
        ctx->pc = 0x20597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205978u;
        // 0x20597c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205980u;
        goto label_fallthrough_0x205978;
    }
    ctx->pc = 0x205978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205978u;
        // 0x20597c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x205978:
    ctx->pc = 0x205980u;
}
