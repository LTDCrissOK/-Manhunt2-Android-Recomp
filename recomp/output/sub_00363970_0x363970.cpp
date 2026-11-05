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

// Function: sub_00363970
// Address: 0x363970 - 0x3639e0
void sub_00363970_0x363970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363970_0x363970");
#endif

    switch (ctx->pc) {
        case 0x363970u: goto label_363970;
        case 0x363974u: goto label_363974;
        case 0x363978u: goto label_363978;
        case 0x36397cu: goto label_36397c;
        case 0x363980u: goto label_363980;
        case 0x363984u: goto label_363984;
        case 0x363988u: goto label_363988;
        case 0x36398cu: goto label_36398c;
        case 0x363990u: goto label_363990;
        case 0x363994u: goto label_363994;
        case 0x363998u: goto label_363998;
        case 0x36399cu: goto label_36399c;
        case 0x3639a0u: goto label_3639a0;
        case 0x3639a4u: goto label_3639a4;
        case 0x3639a8u: goto label_3639a8;
        case 0x3639acu: goto label_3639ac;
        case 0x3639b0u: goto label_3639b0;
        case 0x3639b4u: goto label_3639b4;
        case 0x3639b8u: goto label_3639b8;
        case 0x3639bcu: goto label_3639bc;
        case 0x3639c0u: goto label_3639c0;
        case 0x3639c4u: goto label_3639c4;
        case 0x3639c8u: goto label_3639c8;
        case 0x3639ccu: goto label_3639cc;
        case 0x3639d0u: goto label_3639d0;
        case 0x3639d4u: goto label_3639d4;
        case 0x3639d8u: goto label_3639d8;
        case 0x3639dcu: goto label_3639dc;
        default: break;
    }

    ctx->pc = 0x363970u;

label_363970:
    // 0x363970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_363974:
    // 0x363974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_363978:
    // 0x363978: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x363978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_36397c:
    // 0x36397c: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_363980:
    if (ctx->pc == 0x363980u) {
        ctx->pc = 0x363980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36397Cu;
        // 0x363980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363984u;
        goto label_363984;
    }
    ctx->pc = 0x36397Cu;
    {
        const bool branch_taken_0x36397c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x363980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36397Cu;
        // 0x363980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36397c) {
            ctx->pc = 0x36399Cu;
            goto label_36399c;
        }
    }
    ctx->pc = 0x363984u;
label_363984:
    // 0x363984: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x363984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_363988:
    // 0x363988: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x363988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_36398c:
    // 0x36398c: 0x40f809  jalr        $v0
label_363990:
    if (ctx->pc == 0x363990u) {
        ctx->pc = 0x363994u;
        goto label_363994;
    }
    ctx->pc = 0x36398Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363994u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36398Cu, 0x363994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363994u;
label_363994:
    // 0x363994: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_363998:
    if (ctx->pc == 0x363998u) {
        ctx->pc = 0x363998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363994u;
        // 0x363998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36399Cu;
        goto label_36399c;
    }
    ctx->pc = 0x363994u;
    {
        const bool branch_taken_0x363994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363994u;
        // 0x363998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363994) {
            ctx->pc = 0x3639D0u;
            goto label_3639d0;
        }
    }
    ctx->pc = 0x36399Cu;
label_36399c:
    // 0x36399c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x36399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3639a0:
    // 0x3639a0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3639a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_3639a4:
    // 0x3639a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3639a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3639a8:
    // 0x3639a8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3639a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3639ac:
    // 0x3639ac: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x3639acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_3639b0:
    // 0x3639b0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3639b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3639b4:
    // 0x3639b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3639b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3639b8:
    // 0x3639b8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x3639b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3639bc:
    // 0x3639bc: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3639bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3639c0:
    // 0x3639c0: 0x40f809  jalr        $v0
label_3639c4:
    if (ctx->pc == 0x3639C4u) {
        ctx->pc = 0x3639C8u;
        goto label_3639c8;
    }
    ctx->pc = 0x3639C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3639C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3639C0u, 0x3639C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3639C8u;
label_3639c8:
    // 0x3639c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3639cc:
    if (ctx->pc == 0x3639CCu) {
        ctx->pc = 0x3639CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639C8u;
        // 0x3639cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3639D0u;
        goto label_3639d0;
    }
    ctx->pc = 0x3639C8u;
    {
        const bool branch_taken_0x3639c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3639CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639C8u;
        // 0x3639cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3639c8) {
            ctx->pc = 0x3639D4u;
            goto label_3639d4;
        }
    }
    ctx->pc = 0x3639D0u;
label_3639d0:
    // 0x3639d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3639d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3639d4:
    // 0x3639d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3639d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3639d8:
    // 0x3639d8: 0x3e00008  jr          $ra
label_3639dc:
    if (ctx->pc == 0x3639DCu) {
        ctx->pc = 0x3639DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639D8u;
        // 0x3639dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3639E0u;
        goto label_fallthrough_0x3639d8;
    }
    ctx->pc = 0x3639D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3639DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639D8u;
        // 0x3639dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3639D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3639d8:
    ctx->pc = 0x3639E0u;
}
