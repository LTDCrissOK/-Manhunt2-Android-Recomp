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

// Function: sub_0019EB30
// Address: 0x19eb30 - 0x19eca8
void sub_0019EB30_0x19eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EB30_0x19eb30");
#endif

    switch (ctx->pc) {
        case 0x19eb30u: goto label_19eb30;
        case 0x19eb34u: goto label_19eb34;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb3cu: goto label_19eb3c;
        case 0x19eb40u: goto label_19eb40;
        case 0x19eb44u: goto label_19eb44;
        case 0x19eb48u: goto label_19eb48;
        case 0x19eb4cu: goto label_19eb4c;
        case 0x19eb50u: goto label_19eb50;
        case 0x19eb54u: goto label_19eb54;
        case 0x19eb58u: goto label_19eb58;
        case 0x19eb5cu: goto label_19eb5c;
        case 0x19eb60u: goto label_19eb60;
        case 0x19eb64u: goto label_19eb64;
        case 0x19eb68u: goto label_19eb68;
        case 0x19eb6cu: goto label_19eb6c;
        case 0x19eb70u: goto label_19eb70;
        case 0x19eb74u: goto label_19eb74;
        case 0x19eb78u: goto label_19eb78;
        case 0x19eb7cu: goto label_19eb7c;
        case 0x19eb80u: goto label_19eb80;
        case 0x19eb84u: goto label_19eb84;
        case 0x19eb88u: goto label_19eb88;
        case 0x19eb8cu: goto label_19eb8c;
        case 0x19eb90u: goto label_19eb90;
        case 0x19eb94u: goto label_19eb94;
        case 0x19eb98u: goto label_19eb98;
        case 0x19eb9cu: goto label_19eb9c;
        case 0x19eba0u: goto label_19eba0;
        case 0x19eba4u: goto label_19eba4;
        case 0x19eba8u: goto label_19eba8;
        case 0x19ebacu: goto label_19ebac;
        case 0x19ebb0u: goto label_19ebb0;
        case 0x19ebb4u: goto label_19ebb4;
        case 0x19ebb8u: goto label_19ebb8;
        case 0x19ebbcu: goto label_19ebbc;
        case 0x19ebc0u: goto label_19ebc0;
        case 0x19ebc4u: goto label_19ebc4;
        case 0x19ebc8u: goto label_19ebc8;
        case 0x19ebccu: goto label_19ebcc;
        case 0x19ebd0u: goto label_19ebd0;
        case 0x19ebd4u: goto label_19ebd4;
        case 0x19ebd8u: goto label_19ebd8;
        case 0x19ebdcu: goto label_19ebdc;
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebe4u: goto label_19ebe4;
        case 0x19ebe8u: goto label_19ebe8;
        case 0x19ebecu: goto label_19ebec;
        case 0x19ebf0u: goto label_19ebf0;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ebf8u: goto label_19ebf8;
        case 0x19ebfcu: goto label_19ebfc;
        case 0x19ec00u: goto label_19ec00;
        case 0x19ec04u: goto label_19ec04;
        case 0x19ec08u: goto label_19ec08;
        case 0x19ec0cu: goto label_19ec0c;
        case 0x19ec10u: goto label_19ec10;
        case 0x19ec14u: goto label_19ec14;
        case 0x19ec18u: goto label_19ec18;
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec20u: goto label_19ec20;
        case 0x19ec24u: goto label_19ec24;
        case 0x19ec28u: goto label_19ec28;
        case 0x19ec2cu: goto label_19ec2c;
        case 0x19ec30u: goto label_19ec30;
        case 0x19ec34u: goto label_19ec34;
        case 0x19ec38u: goto label_19ec38;
        case 0x19ec3cu: goto label_19ec3c;
        case 0x19ec40u: goto label_19ec40;
        case 0x19ec44u: goto label_19ec44;
        case 0x19ec48u: goto label_19ec48;
        case 0x19ec4cu: goto label_19ec4c;
        case 0x19ec50u: goto label_19ec50;
        case 0x19ec54u: goto label_19ec54;
        case 0x19ec58u: goto label_19ec58;
        case 0x19ec5cu: goto label_19ec5c;
        case 0x19ec60u: goto label_19ec60;
        case 0x19ec64u: goto label_19ec64;
        case 0x19ec68u: goto label_19ec68;
        case 0x19ec6cu: goto label_19ec6c;
        case 0x19ec70u: goto label_19ec70;
        case 0x19ec74u: goto label_19ec74;
        case 0x19ec78u: goto label_19ec78;
        case 0x19ec7cu: goto label_19ec7c;
        case 0x19ec80u: goto label_19ec80;
        case 0x19ec84u: goto label_19ec84;
        case 0x19ec88u: goto label_19ec88;
        case 0x19ec8cu: goto label_19ec8c;
        case 0x19ec90u: goto label_19ec90;
        case 0x19ec94u: goto label_19ec94;
        case 0x19ec98u: goto label_19ec98;
        case 0x19ec9cu: goto label_19ec9c;
        case 0x19eca0u: goto label_19eca0;
        case 0x19eca4u: goto label_19eca4;
        default: break;
    }

    ctx->pc = 0x19eb30u;

label_19eb30:
    // 0x19eb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19eb34:
    // 0x19eb34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19eb38:
    // 0x19eb38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19eb3c:
    // 0x19eb3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19eb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19eb40:
    // 0x19eb40: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19eb44:
    // 0x19eb44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_19eb48:
    if (ctx->pc == 0x19EB48u) {
        ctx->pc = 0x19EB4Cu;
        goto label_19eb4c;
    }
    ctx->pc = 0x19EB44u;
    {
        const bool branch_taken_0x19eb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb44) {
            ctx->pc = 0x19EB98u;
            goto label_19eb98;
        }
    }
    ctx->pc = 0x19EB4Cu;
label_19eb4c:
    // 0x19eb4c: 0xc064aac  jal         func_192AB0
label_19eb50:
    if (ctx->pc == 0x19EB50u) {
        ctx->pc = 0x19EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB4Cu;
        // 0x19eb50: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB54u;
        goto label_19eb54;
    }
    ctx->pc = 0x19EB4Cu;
    SET_GPR_U32(ctx, 31, 0x19EB54u);
    ctx->pc = 0x19EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB4Cu;
    // 0x19eb50: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192AB0u, 0x19EB4Cu, 0x19EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB54u;
label_19eb54:
    // 0x19eb54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19eb58:
    if (ctx->pc == 0x19EB58u) {
        ctx->pc = 0x19EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB54u;
        // 0x19eb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB5Cu;
        goto label_19eb5c;
    }
    ctx->pc = 0x19EB54u;
    {
        const bool branch_taken_0x19eb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB54u;
        // 0x19eb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb54) {
            ctx->pc = 0x19EB6Cu;
            goto label_19eb6c;
        }
    }
    ctx->pc = 0x19EB5Cu;
label_19eb5c:
    // 0x19eb5c: 0xc067bc2  jal         func_19EF08
label_19eb60:
    if (ctx->pc == 0x19EB60u) {
        ctx->pc = 0x19EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB5Cu;
        // 0x19eb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB64u;
        goto label_19eb64;
    }
    ctx->pc = 0x19EB5Cu;
    SET_GPR_U32(ctx, 31, 0x19EB64u);
    ctx->pc = 0x19EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB5Cu;
    // 0x19eb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF08u, 0x19EB5Cu, 0x19EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB64u;
label_19eb64:
    // 0x19eb64: 0x1000004d  b           . + 4 + (0x4D << 2)
label_19eb68:
    if (ctx->pc == 0x19EB68u) {
        ctx->pc = 0x19EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB64u;
        // 0x19eb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB6Cu;
        goto label_19eb6c;
    }
    ctx->pc = 0x19EB64u;
    {
        const bool branch_taken_0x19eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB64u;
        // 0x19eb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb64) {
            ctx->pc = 0x19EC9Cu;
            goto label_19ec9c;
        }
    }
    ctx->pc = 0x19EB6Cu;
label_19eb6c:
    // 0x19eb6c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x19eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19eb70:
    // 0x19eb70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_19eb74:
    if (ctx->pc == 0x19EB74u) {
        ctx->pc = 0x19EB78u;
        goto label_19eb78;
    }
    ctx->pc = 0x19EB70u;
    {
        const bool branch_taken_0x19eb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb70) {
            ctx->pc = 0x19EB98u;
            goto label_19eb98;
        }
    }
    ctx->pc = 0x19EB78u;
label_19eb78:
    // 0x19eb78: 0xc064a9c  jal         func_192A70
label_19eb7c:
    if (ctx->pc == 0x19EB7Cu) {
        ctx->pc = 0x19EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB78u;
        // 0x19eb7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB80u;
        goto label_19eb80;
    }
    ctx->pc = 0x19EB78u;
    SET_GPR_U32(ctx, 31, 0x19EB80u);
    ctx->pc = 0x19EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB78u;
    // 0x19eb7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A70u, 0x19EB78u, 0x19EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB80u;
label_19eb80:
    // 0x19eb80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19eb84:
    if (ctx->pc == 0x19EB84u) {
        ctx->pc = 0x19EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB80u;
        // 0x19eb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB88u;
        goto label_19eb88;
    }
    ctx->pc = 0x19EB80u;
    {
        const bool branch_taken_0x19eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB80u;
        // 0x19eb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb80) {
            ctx->pc = 0x19EB98u;
            goto label_19eb98;
        }
    }
    ctx->pc = 0x19EB88u;
label_19eb88:
    // 0x19eb88: 0xc067bc2  jal         func_19EF08
label_19eb8c:
    if (ctx->pc == 0x19EB8Cu) {
        ctx->pc = 0x19EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB88u;
        // 0x19eb8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB90u;
        goto label_19eb90;
    }
    ctx->pc = 0x19EB88u;
    SET_GPR_U32(ctx, 31, 0x19EB90u);
    ctx->pc = 0x19EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB88u;
    // 0x19eb8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF08u, 0x19EB88u, 0x19EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB90u;
label_19eb90:
    // 0x19eb90: 0x10000042  b           . + 4 + (0x42 << 2)
label_19eb94:
    if (ctx->pc == 0x19EB94u) {
        ctx->pc = 0x19EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB90u;
        // 0x19eb94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB98u;
        goto label_19eb98;
    }
    ctx->pc = 0x19EB90u;
    {
        const bool branch_taken_0x19eb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB90u;
        // 0x19eb94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb90) {
            ctx->pc = 0x19EC9Cu;
            goto label_19ec9c;
        }
    }
    ctx->pc = 0x19EB98u;
label_19eb98:
    // 0x19eb98: 0xc064a9a  jal         func_192A68
label_19eb9c:
    if (ctx->pc == 0x19EB9Cu) {
        ctx->pc = 0x19EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB98u;
        // 0x19eb9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBA0u;
        goto label_19eba0;
    }
    ctx->pc = 0x19EB98u;
    SET_GPR_U32(ctx, 31, 0x19EBA0u);
    ctx->pc = 0x19EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB98u;
    // 0x19eb9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A68u, 0x19EB98u, 0x19EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBA0u;
label_19eba0:
    // 0x19eba0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_19eba4:
    if (ctx->pc == 0x19EBA4u) {
        ctx->pc = 0x19EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBA0u;
        // 0x19eba4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBA8u;
        goto label_19eba8;
    }
    ctx->pc = 0x19EBA0u;
    {
        const bool branch_taken_0x19eba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eba0) {
            ctx->pc = 0x19EBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EBA0u;
            // 0x19eba4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EBB8u;
            goto label_19ebb8;
        }
    }
    ctx->pc = 0x19EBA8u;
label_19eba8:
    // 0x19eba8: 0xc067b7e  jal         func_19EDF8
label_19ebac:
    if (ctx->pc == 0x19EBACu) {
        ctx->pc = 0x19EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBA8u;
        // 0x19ebac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBB0u;
        goto label_19ebb0;
    }
    ctx->pc = 0x19EBA8u;
    SET_GPR_U32(ctx, 31, 0x19EBB0u);
    ctx->pc = 0x19EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBA8u;
    // 0x19ebac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDF8u, 0x19EBA8u, 0x19EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBB0u;
label_19ebb0:
    // 0x19ebb0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_19ebb4:
    if (ctx->pc == 0x19EBB4u) {
        ctx->pc = 0x19EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBB0u;
        // 0x19ebb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBB8u;
        goto label_19ebb8;
    }
    ctx->pc = 0x19EBB0u;
    {
        const bool branch_taken_0x19ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBB0u;
        // 0x19ebb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebb0) {
            ctx->pc = 0x19EC9Cu;
            goto label_19ec9c;
        }
    }
    ctx->pc = 0x19EBB8u;
label_19ebb8:
    // 0x19ebb8: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_19ebbc:
    // 0x19ebbc: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x19ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
label_19ebc0:
    // 0x19ebc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19ebc4:
    // 0x19ebc4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x19ebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_19ebc8:
    // 0x19ebc8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_19ebcc:
    if (ctx->pc == 0x19EBCCu) {
        ctx->pc = 0x19EBD0u;
        goto label_19ebd0;
    }
    ctx->pc = 0x19EBC8u;
    {
        const bool branch_taken_0x19ebc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ebc8) {
            ctx->pc = 0x19EC20u;
            goto label_19ec20;
        }
    }
    ctx->pc = 0x19EBD0u;
label_19ebd0:
    // 0x19ebd0: 0xc061a26  jal         func_186898
label_19ebd4:
    if (ctx->pc == 0x19EBD4u) {
        ctx->pc = 0x19EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBD0u;
        // 0x19ebd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBD8u;
        goto label_19ebd8;
    }
    ctx->pc = 0x19EBD0u;
    SET_GPR_U32(ctx, 31, 0x19EBD8u);
    ctx->pc = 0x19EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBD0u;
    // 0x19ebd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19EBD0u, 0x19EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBD8u;
label_19ebd8:
    // 0x19ebd8: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x19ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ebdc:
    // 0x19ebdc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x19ebdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_19ebe0:
    // 0x19ebe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ebe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ebe4:
    // 0x19ebe4: 0x0  nop
    ctx->pc = 0x19ebe4u;
    // NOP
label_19ebe8:
    // 0x19ebe8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ebe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19ebec:
    // 0x19ebec: 0x0  nop
    ctx->pc = 0x19ebecu;
    // NOP
label_19ebf0:
    // 0x19ebf0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_19ebf4:
    if (ctx->pc == 0x19EBF4u) {
        ctx->pc = 0x19EBF8u;
        goto label_19ebf8;
    }
    ctx->pc = 0x19EBF0u;
    {
        const bool branch_taken_0x19ebf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ebf0) {
            ctx->pc = 0x19EC20u;
            goto label_19ec20;
        }
    }
    ctx->pc = 0x19EBF8u;
label_19ebf8:
    // 0x19ebf8: 0xc061a1e  jal         func_186878
label_19ebfc:
    if (ctx->pc == 0x19EBFCu) {
        ctx->pc = 0x19EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBF8u;
        // 0x19ebfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC00u;
        goto label_19ec00;
    }
    ctx->pc = 0x19EBF8u;
    SET_GPR_U32(ctx, 31, 0x19EC00u);
    ctx->pc = 0x19EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBF8u;
    // 0x19ebfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19EBF8u, 0x19EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC00u;
label_19ec00:
    // 0x19ec00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ec04:
    // 0x19ec04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ec08:
    // 0x19ec08: 0xc061a16  jal         func_186858
label_19ec0c:
    if (ctx->pc == 0x19EC0Cu) {
        ctx->pc = 0x19EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC08u;
        // 0x19ec0c: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC10u;
        goto label_19ec10;
    }
    ctx->pc = 0x19EC08u;
    SET_GPR_U32(ctx, 31, 0x19EC10u);
    ctx->pc = 0x19EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC08u;
    // 0x19ec0c: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EC08u, 0x19EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC10u;
label_19ec10:
    // 0x19ec10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19ec10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19ec14:
    // 0x19ec14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ec14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ec18:
    // 0x19ec18: 0x1000000a  b           . + 4 + (0xA << 2)
label_19ec1c:
    if (ctx->pc == 0x19EC1Cu) {
        ctx->pc = 0x19EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC18u;
        // 0x19ec1c: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC20u;
        goto label_19ec20;
    }
    ctx->pc = 0x19EC18u;
    {
        const bool branch_taken_0x19ec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC18u;
        // 0x19ec1c: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec18) {
            ctx->pc = 0x19EC44u;
            goto label_19ec44;
        }
    }
    ctx->pc = 0x19EC20u;
label_19ec20:
    // 0x19ec20: 0xc061a1e  jal         func_186878
label_19ec24:
    if (ctx->pc == 0x19EC24u) {
        ctx->pc = 0x19EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC20u;
        // 0x19ec24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC28u;
        goto label_19ec28;
    }
    ctx->pc = 0x19EC20u;
    SET_GPR_U32(ctx, 31, 0x19EC28u);
    ctx->pc = 0x19EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC20u;
    // 0x19ec24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19EC20u, 0x19EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC28u;
label_19ec28:
    // 0x19ec28: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x19ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
label_19ec2c:
    // 0x19ec2c: 0xc061a16  jal         func_186858
label_19ec30:
    if (ctx->pc == 0x19EC30u) {
        ctx->pc = 0x19EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC2Cu;
        // 0x19ec30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC34u;
        goto label_19ec34;
    }
    ctx->pc = 0x19EC2Cu;
    SET_GPR_U32(ctx, 31, 0x19EC34u);
    ctx->pc = 0x19EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC2Cu;
    // 0x19ec30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EC2Cu, 0x19EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC34u;
label_19ec34:
    // 0x19ec34: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19ec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19ec38:
    // 0x19ec38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ec38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ec3c:
    // 0x19ec3c: 0x0  nop
    ctx->pc = 0x19ec3cu;
    // NOP
label_19ec40:
    // 0x19ec40: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19ec40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19ec44:
    // 0x19ec44: 0xc061a12  jal         func_186848
label_19ec48:
    if (ctx->pc == 0x19EC48u) {
        ctx->pc = 0x19EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC44u;
        // 0x19ec48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC4Cu;
        goto label_19ec4c;
    }
    ctx->pc = 0x19EC44u;
    SET_GPR_U32(ctx, 31, 0x19EC4Cu);
    ctx->pc = 0x19EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC44u;
    // 0x19ec48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19EC44u, 0x19EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC4Cu;
label_19ec4c:
    // 0x19ec4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ec50:
    // 0x19ec50: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x19ec50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_19ec54:
    // 0x19ec54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19ec54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ec58:
    // 0x19ec58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ec5c:
    // 0x19ec5c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x19ec5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_19ec60:
    // 0x19ec60: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19ec60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19ec64:
    // 0x19ec64: 0xc070304  jal         func_1C0C10
label_19ec68:
    if (ctx->pc == 0x19EC68u) {
        ctx->pc = 0x19EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC64u;
        // 0x19ec68: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC6Cu;
        goto label_19ec6c;
    }
    ctx->pc = 0x19EC64u;
    SET_GPR_U32(ctx, 31, 0x19EC6Cu);
    ctx->pc = 0x19EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC64u;
    // 0x19ec68: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0C10u, 0x19EC64u, 0x19EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC6Cu;
label_19ec6c:
    // 0x19ec6c: 0xc061a12  jal         func_186848
label_19ec70:
    if (ctx->pc == 0x19EC70u) {
        ctx->pc = 0x19EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC6Cu;
        // 0x19ec70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC74u;
        goto label_19ec74;
    }
    ctx->pc = 0x19EC6Cu;
    SET_GPR_U32(ctx, 31, 0x19EC74u);
    ctx->pc = 0x19EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC6Cu;
    // 0x19ec70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19EC6Cu, 0x19EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC74u;
label_19ec74:
    // 0x19ec74: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19ec78:
    // 0x19ec78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ec7c:
    // 0x19ec7c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19ec80:
    // 0x19ec80: 0x40f809  jalr        $v0
label_19ec84:
    if (ctx->pc == 0x19EC84u) {
        ctx->pc = 0x19EC88u;
        goto label_19ec88;
    }
    ctx->pc = 0x19EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EC88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EC80u, 0x19EC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EC88u;
label_19ec88:
    // 0x19ec88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_19ec8c:
    if (ctx->pc == 0x19EC8Cu) {
        ctx->pc = 0x19EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC88u;
        // 0x19ec8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC90u;
        goto label_19ec90;
    }
    ctx->pc = 0x19EC88u;
    {
        const bool branch_taken_0x19ec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec88) {
            ctx->pc = 0x19EC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC88u;
            // 0x19ec8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC9Cu;
            goto label_19ec9c;
        }
    }
    ctx->pc = 0x19EC90u;
label_19ec90:
    // 0x19ec90: 0xc067b98  jal         func_19EE60
label_19ec94:
    if (ctx->pc == 0x19EC94u) {
        ctx->pc = 0x19EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC90u;
        // 0x19ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC98u;
        goto label_19ec98;
    }
    ctx->pc = 0x19EC90u;
    SET_GPR_U32(ctx, 31, 0x19EC98u);
    ctx->pc = 0x19EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC90u;
    // 0x19ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE60u, 0x19EC90u, 0x19EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC98u;
label_19ec98:
    // 0x19ec98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ec98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ec9c:
    // 0x19ec9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19ec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19eca0:
    // 0x19eca0: 0x3e00008  jr          $ra
label_19eca4:
    if (ctx->pc == 0x19ECA4u) {
        ctx->pc = 0x19ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECA0u;
        // 0x19eca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECA8u;
        goto label_fallthrough_0x19eca0;
    }
    ctx->pc = 0x19ECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECA0u;
        // 0x19eca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19eca0:
    ctx->pc = 0x19ECA8u;
}
