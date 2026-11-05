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

// Function: sub_00346BD0
// Address: 0x346bd0 - 0x346cf0
void sub_00346BD0_0x346bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346BD0_0x346bd0");
#endif

    switch (ctx->pc) {
        case 0x346bd0u: goto label_346bd0;
        case 0x346bd4u: goto label_346bd4;
        case 0x346bd8u: goto label_346bd8;
        case 0x346bdcu: goto label_346bdc;
        case 0x346be0u: goto label_346be0;
        case 0x346be4u: goto label_346be4;
        case 0x346be8u: goto label_346be8;
        case 0x346becu: goto label_346bec;
        case 0x346bf0u: goto label_346bf0;
        case 0x346bf4u: goto label_346bf4;
        case 0x346bf8u: goto label_346bf8;
        case 0x346bfcu: goto label_346bfc;
        case 0x346c00u: goto label_346c00;
        case 0x346c04u: goto label_346c04;
        case 0x346c08u: goto label_346c08;
        case 0x346c0cu: goto label_346c0c;
        case 0x346c10u: goto label_346c10;
        case 0x346c14u: goto label_346c14;
        case 0x346c18u: goto label_346c18;
        case 0x346c1cu: goto label_346c1c;
        case 0x346c20u: goto label_346c20;
        case 0x346c24u: goto label_346c24;
        case 0x346c28u: goto label_346c28;
        case 0x346c2cu: goto label_346c2c;
        case 0x346c30u: goto label_346c30;
        case 0x346c34u: goto label_346c34;
        case 0x346c38u: goto label_346c38;
        case 0x346c3cu: goto label_346c3c;
        case 0x346c40u: goto label_346c40;
        case 0x346c44u: goto label_346c44;
        case 0x346c48u: goto label_346c48;
        case 0x346c4cu: goto label_346c4c;
        case 0x346c50u: goto label_346c50;
        case 0x346c54u: goto label_346c54;
        case 0x346c58u: goto label_346c58;
        case 0x346c5cu: goto label_346c5c;
        case 0x346c60u: goto label_346c60;
        case 0x346c64u: goto label_346c64;
        case 0x346c68u: goto label_346c68;
        case 0x346c6cu: goto label_346c6c;
        case 0x346c70u: goto label_346c70;
        case 0x346c74u: goto label_346c74;
        case 0x346c78u: goto label_346c78;
        case 0x346c7cu: goto label_346c7c;
        case 0x346c80u: goto label_346c80;
        case 0x346c84u: goto label_346c84;
        case 0x346c88u: goto label_346c88;
        case 0x346c8cu: goto label_346c8c;
        case 0x346c90u: goto label_346c90;
        case 0x346c94u: goto label_346c94;
        case 0x346c98u: goto label_346c98;
        case 0x346c9cu: goto label_346c9c;
        case 0x346ca0u: goto label_346ca0;
        case 0x346ca4u: goto label_346ca4;
        case 0x346ca8u: goto label_346ca8;
        case 0x346cacu: goto label_346cac;
        case 0x346cb0u: goto label_346cb0;
        case 0x346cb4u: goto label_346cb4;
        case 0x346cb8u: goto label_346cb8;
        case 0x346cbcu: goto label_346cbc;
        case 0x346cc0u: goto label_346cc0;
        case 0x346cc4u: goto label_346cc4;
        case 0x346cc8u: goto label_346cc8;
        case 0x346cccu: goto label_346ccc;
        case 0x346cd0u: goto label_346cd0;
        case 0x346cd4u: goto label_346cd4;
        case 0x346cd8u: goto label_346cd8;
        case 0x346cdcu: goto label_346cdc;
        case 0x346ce0u: goto label_346ce0;
        case 0x346ce4u: goto label_346ce4;
        case 0x346ce8u: goto label_346ce8;
        case 0x346cecu: goto label_346cec;
        default: break;
    }

    ctx->pc = 0x346bd0u;

label_346bd0:
    // 0x346bd0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x346bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_346bd4:
    // 0x346bd4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x346bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_346bd8:
    // 0x346bd8: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x346bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
label_346bdc:
    // 0x346bdc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x346bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_346be0:
    // 0x346be0: 0xffb101b8  sd          $s1, 0x1B8($sp)
    ctx->pc = 0x346be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 17));
label_346be4:
    // 0x346be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_346be8:
    // 0x346be8: 0xffb201c0  sd          $s2, 0x1C0($sp)
    ctx->pc = 0x346be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 18));
label_346bec:
    // 0x346bec: 0x2451fe40  addiu       $s1, $v0, -0x1C0
    ctx->pc = 0x346becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
label_346bf0:
    // 0x346bf0: 0xffb301c8  sd          $s3, 0x1C8($sp)
    ctx->pc = 0x346bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 19));
label_346bf4:
    // 0x346bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_346bf8:
    // 0x346bf8: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x346bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
label_346bfc:
    // 0x346bfc: 0xc0d7384  jal         func_35CE10
label_346c00:
    if (ctx->pc == 0x346C00u) {
        ctx->pc = 0x346C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BFCu;
        // 0x346c00: 0x3c130047  lui         $s3, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C04u;
        goto label_346c04;
    }
    ctx->pc = 0x346BFCu;
    SET_GPR_U32(ctx, 31, 0x346C04u);
    ctx->pc = 0x346C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346BFCu;
    // 0x346c00: 0x3c130047  lui         $s3, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x346BFCu, 0x346C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C04u;
label_346c04:
    // 0x346c04: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x346c04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
label_346c08:
    // 0x346c08: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x346c08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
label_346c0c:
    // 0x346c0c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_346c10:
    if (ctx->pc == 0x346C10u) {
        ctx->pc = 0x346C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C0Cu;
        // 0x346c10: 0xa3a000e0  sb          $zero, 0xE0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C14u;
        goto label_346c14;
    }
    ctx->pc = 0x346C0Cu;
    {
        const bool branch_taken_0x346c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C0Cu;
        // 0x346c10: 0xa3a000e0  sb          $zero, 0xE0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c0c) {
            ctx->pc = 0x346C78u;
            goto label_346c78;
        }
    }
    ctx->pc = 0x346C14u;
label_346c14:
    // 0x346c14: 0x0  nop
    ctx->pc = 0x346c14u;
    // NOP
label_346c18:
    // 0x346c18: 0xc0d73cc  jal         func_35CF30
label_346c1c:
    if (ctx->pc == 0x346C1Cu) {
        ctx->pc = 0x346C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C18u;
        // 0x346c1c: 0x26656200  addiu       $a1, $s3, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 25088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C20u;
        goto label_346c20;
    }
    ctx->pc = 0x346C18u;
    SET_GPR_U32(ctx, 31, 0x346C20u);
    ctx->pc = 0x346C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C18u;
    // 0x346c1c: 0x26656200  addiu       $a1, $s3, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346C18u, 0x346C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C20u;
label_346c20:
    // 0x346c20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_346c24:
    // 0x346c24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_346c28:
    if (ctx->pc == 0x346C28u) {
        ctx->pc = 0x346C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C24u;
        // 0x346c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C2Cu;
        goto label_346c2c;
    }
    ctx->pc = 0x346C24u;
    {
        const bool branch_taken_0x346c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C24u;
        // 0x346c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c24) {
            ctx->pc = 0x346C3Cu;
            goto label_346c3c;
        }
    }
    ctx->pc = 0x346C2Cu;
label_346c2c:
    // 0x346c2c: 0xc09e062  jal         func_278188
label_346c30:
    if (ctx->pc == 0x346C30u) {
        ctx->pc = 0x346C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C2Cu;
        // 0x346c30: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C34u;
        goto label_346c34;
    }
    ctx->pc = 0x346C2Cu;
    SET_GPR_U32(ctx, 31, 0x346C34u);
    ctx->pc = 0x346C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C2Cu;
    // 0x346c30: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x346C2Cu, 0x346C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C34u;
label_346c34:
    // 0x346c34: 0x10000011  b           . + 4 + (0x11 << 2)
label_346c38:
    if (ctx->pc == 0x346C38u) {
        ctx->pc = 0x346C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C34u;
        // 0x346c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C3Cu;
        goto label_346c3c;
    }
    ctx->pc = 0x346C34u;
    {
        const bool branch_taken_0x346c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C34u;
        // 0x346c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c34) {
            ctx->pc = 0x346C7Cu;
            goto label_346c7c;
        }
    }
    ctx->pc = 0x346C3Cu;
label_346c3c:
    // 0x346c3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_346c40:
    // 0x346c40: 0xc0d73cc  jal         func_35CF30
label_346c44:
    if (ctx->pc == 0x346C44u) {
        ctx->pc = 0x346C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C40u;
        // 0x346c44: 0x26456210  addiu       $a1, $s2, 0x6210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C48u;
        goto label_346c48;
    }
    ctx->pc = 0x346C40u;
    SET_GPR_U32(ctx, 31, 0x346C48u);
    ctx->pc = 0x346C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C40u;
    // 0x346c44: 0x26456210  addiu       $a1, $s2, 0x6210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346C40u, 0x346C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C48u;
label_346c48:
    // 0x346c48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_346c4c:
    // 0x346c4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_346c50:
    if (ctx->pc == 0x346C50u) {
        ctx->pc = 0x346C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C4Cu;
        // 0x346c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C54u;
        goto label_346c54;
    }
    ctx->pc = 0x346C4Cu;
    {
        const bool branch_taken_0x346c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C4Cu;
        // 0x346c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c4c) {
            ctx->pc = 0x346C64u;
            goto label_346c64;
        }
    }
    ctx->pc = 0x346C54u;
label_346c54:
    // 0x346c54: 0xc09e062  jal         func_278188
label_346c58:
    if (ctx->pc == 0x346C58u) {
        ctx->pc = 0x346C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C54u;
        // 0x346c58: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C5Cu;
        goto label_346c5c;
    }
    ctx->pc = 0x346C54u;
    SET_GPR_U32(ctx, 31, 0x346C5Cu);
    ctx->pc = 0x346C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C54u;
    // 0x346c58: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x346C54u, 0x346C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C5Cu;
label_346c5c:
    // 0x346c5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_346c60:
    if (ctx->pc == 0x346C60u) {
        ctx->pc = 0x346C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C5Cu;
        // 0x346c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C64u;
        goto label_346c64;
    }
    ctx->pc = 0x346C5Cu;
    {
        const bool branch_taken_0x346c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C5Cu;
        // 0x346c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c5c) {
            ctx->pc = 0x346C7Cu;
            goto label_346c7c;
        }
    }
    ctx->pc = 0x346C64u;
label_346c64:
    // 0x346c64: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x346c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_346c68:
    // 0x346c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346c6c:
    // 0x346c6c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x346c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_346c70:
    // 0x346c70: 0x40f809  jalr        $v0
label_346c74:
    if (ctx->pc == 0x346C74u) {
        ctx->pc = 0x346C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C70u;
        // 0x346c74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C78u;
        goto label_346c78;
    }
    ctx->pc = 0x346C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x346C78u);
        ctx->pc = 0x346C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C70u;
        // 0x346c74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346C70u, 0x346C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346C78u;
label_346c78:
    // 0x346c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_346c7c:
    // 0x346c7c: 0xc09de68  jal         func_2779A0
label_346c80:
    if (ctx->pc == 0x346C80u) {
        ctx->pc = 0x346C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C7Cu;
        // 0x346c80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C84u;
        goto label_346c84;
    }
    ctx->pc = 0x346C7Cu;
    SET_GPR_U32(ctx, 31, 0x346C84u);
    ctx->pc = 0x346C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C7Cu;
    // 0x346c80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x346C7Cu, 0x346C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C84u;
label_346c84:
    // 0x346c84: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_346c88:
    if (ctx->pc == 0x346C88u) {
        ctx->pc = 0x346C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C84u;
        // 0x346c88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C8Cu;
        goto label_346c8c;
    }
    ctx->pc = 0x346C84u;
    {
        const bool branch_taken_0x346c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C84u;
        // 0x346c88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c84) {
            ctx->pc = 0x346C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346c18;
        }
    }
    ctx->pc = 0x346C8Cu;
label_346c8c:
    // 0x346c8c: 0x83a20010  lb          $v0, 0x10($sp)
    ctx->pc = 0x346c8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_346c90:
    // 0x346c90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_346c94:
    if (ctx->pc == 0x346C94u) {
        ctx->pc = 0x346C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C90u;
        // 0x346c94: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346C98u;
        goto label_346c98;
    }
    ctx->pc = 0x346C90u;
    {
        const bool branch_taken_0x346c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C90u;
        // 0x346c94: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c90) {
            ctx->pc = 0x346CC4u;
            goto label_346cc4;
        }
    }
    ctx->pc = 0x346C98u;
label_346c98:
    // 0x346c98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x346c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_346c9c:
    // 0x346c9c: 0xc0c7a76  jal         func_31E9D8
label_346ca0:
    if (ctx->pc == 0x346CA0u) {
        ctx->pc = 0x346CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C9Cu;
        // 0x346ca0: 0x8c44bdb8  lw          $a0, -0x4248($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346CA4u;
        goto label_346ca4;
    }
    ctx->pc = 0x346C9Cu;
    SET_GPR_U32(ctx, 31, 0x346CA4u);
    ctx->pc = 0x346CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C9Cu;
    // 0x346ca0: 0x8c44bdb8  lw          $a0, -0x4248($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x346C9Cu, 0x346CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CA4u;
label_346ca4:
    // 0x346ca4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_346ca8:
    if (ctx->pc == 0x346CA8u) {
        ctx->pc = 0x346CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CA4u;
        // 0x346ca8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346CACu;
        goto label_346cac;
    }
    ctx->pc = 0x346CA4u;
    {
        const bool branch_taken_0x346ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CA4u;
        // 0x346ca8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ca4) {
            ctx->pc = 0x346CC0u;
            goto label_346cc0;
        }
    }
    ctx->pc = 0x346CACu;
label_346cac:
    // 0x346cac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_346cb0:
    // 0x346cb0: 0xc0d7412  jal         func_35D048
label_346cb4:
    if (ctx->pc == 0x346CB4u) {
        ctx->pc = 0x346CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CB0u;
        // 0x346cb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346CB8u;
        goto label_346cb8;
    }
    ctx->pc = 0x346CB0u;
    SET_GPR_U32(ctx, 31, 0x346CB8u);
    ctx->pc = 0x346CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CB0u;
    // 0x346cb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x346CB0u, 0x346CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CB8u;
label_346cb8:
    // 0x346cb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_346cbc:
    if (ctx->pc == 0x346CBCu) {
        ctx->pc = 0x346CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CB8u;
        // 0x346cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346CC0u;
        goto label_346cc0;
    }
    ctx->pc = 0x346CB8u;
    {
        const bool branch_taken_0x346cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CB8u;
        // 0x346cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346cb8) {
            ctx->pc = 0x346CD0u;
            goto label_346cd0;
        }
    }
    ctx->pc = 0x346CC0u;
label_346cc0:
    // 0x346cc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_346cc4:
    // 0x346cc4: 0xc0d7412  jal         func_35D048
label_346cc8:
    if (ctx->pc == 0x346CC8u) {
        ctx->pc = 0x346CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CC4u;
        // 0x346cc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346CCCu;
        goto label_346ccc;
    }
    ctx->pc = 0x346CC4u;
    SET_GPR_U32(ctx, 31, 0x346CCCu);
    ctx->pc = 0x346CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CC4u;
    // 0x346cc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x346CC4u, 0x346CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CCCu;
label_346ccc:
    // 0x346ccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346cd0:
    // 0x346cd0: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x346cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_346cd4:
    // 0x346cd4: 0xdfb101b8  ld          $s1, 0x1B8($sp)
    ctx->pc = 0x346cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_346cd8:
    // 0x346cd8: 0xdfb201c0  ld          $s2, 0x1C0($sp)
    ctx->pc = 0x346cd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_346cdc:
    // 0x346cdc: 0xdfb301c8  ld          $s3, 0x1C8($sp)
    ctx->pc = 0x346cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 456)));
label_346ce0:
    // 0x346ce0: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x346ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_346ce4:
    // 0x346ce4: 0x3e00008  jr          $ra
label_346ce8:
    if (ctx->pc == 0x346CE8u) {
        ctx->pc = 0x346CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CE4u;
        // 0x346ce8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346CECu;
        goto label_346cec;
    }
    ctx->pc = 0x346CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CE4u;
        // 0x346ce8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346CECu;
label_346cec:
    // 0x346cec: 0x0  nop
    ctx->pc = 0x346cecu;
    // NOP
    ctx->pc = 0x346cf0u;
}
