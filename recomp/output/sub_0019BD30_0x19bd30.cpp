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

// Function: sub_0019BD30
// Address: 0x19bd30 - 0x19bed8
void sub_0019BD30_0x19bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BD30_0x19bd30");
#endif

    switch (ctx->pc) {
        case 0x19bd30u: goto label_19bd30;
        case 0x19bd34u: goto label_19bd34;
        case 0x19bd38u: goto label_19bd38;
        case 0x19bd3cu: goto label_19bd3c;
        case 0x19bd40u: goto label_19bd40;
        case 0x19bd44u: goto label_19bd44;
        case 0x19bd48u: goto label_19bd48;
        case 0x19bd4cu: goto label_19bd4c;
        case 0x19bd50u: goto label_19bd50;
        case 0x19bd54u: goto label_19bd54;
        case 0x19bd58u: goto label_19bd58;
        case 0x19bd5cu: goto label_19bd5c;
        case 0x19bd60u: goto label_19bd60;
        case 0x19bd64u: goto label_19bd64;
        case 0x19bd68u: goto label_19bd68;
        case 0x19bd6cu: goto label_19bd6c;
        case 0x19bd70u: goto label_19bd70;
        case 0x19bd74u: goto label_19bd74;
        case 0x19bd78u: goto label_19bd78;
        case 0x19bd7cu: goto label_19bd7c;
        case 0x19bd80u: goto label_19bd80;
        case 0x19bd84u: goto label_19bd84;
        case 0x19bd88u: goto label_19bd88;
        case 0x19bd8cu: goto label_19bd8c;
        case 0x19bd90u: goto label_19bd90;
        case 0x19bd94u: goto label_19bd94;
        case 0x19bd98u: goto label_19bd98;
        case 0x19bd9cu: goto label_19bd9c;
        case 0x19bda0u: goto label_19bda0;
        case 0x19bda4u: goto label_19bda4;
        case 0x19bda8u: goto label_19bda8;
        case 0x19bdacu: goto label_19bdac;
        case 0x19bdb0u: goto label_19bdb0;
        case 0x19bdb4u: goto label_19bdb4;
        case 0x19bdb8u: goto label_19bdb8;
        case 0x19bdbcu: goto label_19bdbc;
        case 0x19bdc0u: goto label_19bdc0;
        case 0x19bdc4u: goto label_19bdc4;
        case 0x19bdc8u: goto label_19bdc8;
        case 0x19bdccu: goto label_19bdcc;
        case 0x19bdd0u: goto label_19bdd0;
        case 0x19bdd4u: goto label_19bdd4;
        case 0x19bdd8u: goto label_19bdd8;
        case 0x19bddcu: goto label_19bddc;
        case 0x19bde0u: goto label_19bde0;
        case 0x19bde4u: goto label_19bde4;
        case 0x19bde8u: goto label_19bde8;
        case 0x19bdecu: goto label_19bdec;
        case 0x19bdf0u: goto label_19bdf0;
        case 0x19bdf4u: goto label_19bdf4;
        case 0x19bdf8u: goto label_19bdf8;
        case 0x19bdfcu: goto label_19bdfc;
        case 0x19be00u: goto label_19be00;
        case 0x19be04u: goto label_19be04;
        case 0x19be08u: goto label_19be08;
        case 0x19be0cu: goto label_19be0c;
        case 0x19be10u: goto label_19be10;
        case 0x19be14u: goto label_19be14;
        case 0x19be18u: goto label_19be18;
        case 0x19be1cu: goto label_19be1c;
        case 0x19be20u: goto label_19be20;
        case 0x19be24u: goto label_19be24;
        case 0x19be28u: goto label_19be28;
        case 0x19be2cu: goto label_19be2c;
        case 0x19be30u: goto label_19be30;
        case 0x19be34u: goto label_19be34;
        case 0x19be38u: goto label_19be38;
        case 0x19be3cu: goto label_19be3c;
        case 0x19be40u: goto label_19be40;
        case 0x19be44u: goto label_19be44;
        case 0x19be48u: goto label_19be48;
        case 0x19be4cu: goto label_19be4c;
        case 0x19be50u: goto label_19be50;
        case 0x19be54u: goto label_19be54;
        case 0x19be58u: goto label_19be58;
        case 0x19be5cu: goto label_19be5c;
        case 0x19be60u: goto label_19be60;
        case 0x19be64u: goto label_19be64;
        case 0x19be68u: goto label_19be68;
        case 0x19be6cu: goto label_19be6c;
        case 0x19be70u: goto label_19be70;
        case 0x19be74u: goto label_19be74;
        case 0x19be78u: goto label_19be78;
        case 0x19be7cu: goto label_19be7c;
        case 0x19be80u: goto label_19be80;
        case 0x19be84u: goto label_19be84;
        case 0x19be88u: goto label_19be88;
        case 0x19be8cu: goto label_19be8c;
        case 0x19be90u: goto label_19be90;
        case 0x19be94u: goto label_19be94;
        case 0x19be98u: goto label_19be98;
        case 0x19be9cu: goto label_19be9c;
        case 0x19bea0u: goto label_19bea0;
        case 0x19bea4u: goto label_19bea4;
        case 0x19bea8u: goto label_19bea8;
        case 0x19beacu: goto label_19beac;
        case 0x19beb0u: goto label_19beb0;
        case 0x19beb4u: goto label_19beb4;
        case 0x19beb8u: goto label_19beb8;
        case 0x19bebcu: goto label_19bebc;
        case 0x19bec0u: goto label_19bec0;
        case 0x19bec4u: goto label_19bec4;
        case 0x19bec8u: goto label_19bec8;
        case 0x19beccu: goto label_19becc;
        case 0x19bed0u: goto label_19bed0;
        case 0x19bed4u: goto label_19bed4;
        default: break;
    }

    ctx->pc = 0x19bd30u;

label_19bd30:
    // 0x19bd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19bd34:
    // 0x19bd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19bd38:
    // 0x19bd38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19bd3c:
    // 0x19bd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bd40:
    // 0x19bd40: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_19bd44:
    // 0x19bd44: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_19bd48:
    if (ctx->pc == 0x19BD48u) {
        ctx->pc = 0x19BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD44u;
        // 0x19bd48: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD4Cu;
        goto label_19bd4c;
    }
    ctx->pc = 0x19BD44u;
    {
        const bool branch_taken_0x19bd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd44) {
            ctx->pc = 0x19BD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BD44u;
            // 0x19bd48: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BD7Cu;
            goto label_19bd7c;
        }
    }
    ctx->pc = 0x19BD4Cu;
label_19bd4c:
    // 0x19bd4c: 0xc0676b8  jal         func_19DAE0
label_19bd50:
    if (ctx->pc == 0x19BD50u) {
        ctx->pc = 0x19BD54u;
        goto label_19bd54;
    }
    ctx->pc = 0x19BD4Cu;
    SET_GPR_U32(ctx, 31, 0x19BD54u);
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19BD4Cu, 0x19BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD54u;
label_19bd54:
    // 0x19bd54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19bd58:
    if (ctx->pc == 0x19BD58u) {
        ctx->pc = 0x19BD5Cu;
        goto label_19bd5c;
    }
    ctx->pc = 0x19BD54u;
    {
        const bool branch_taken_0x19bd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bd54) {
            ctx->pc = 0x19BD6Cu;
            goto label_19bd6c;
        }
    }
    ctx->pc = 0x19BD5Cu;
label_19bd5c:
    // 0x19bd5c: 0xc06766e  jal         func_19D9B8
label_19bd60:
    if (ctx->pc == 0x19BD60u) {
        ctx->pc = 0x19BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD5Cu;
        // 0x19bd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD64u;
        goto label_19bd64;
    }
    ctx->pc = 0x19BD5Cu;
    SET_GPR_U32(ctx, 31, 0x19BD64u);
    ctx->pc = 0x19BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD5Cu;
    // 0x19bd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B8u, 0x19BD5Cu, 0x19BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD64u;
label_19bd64:
    // 0x19bd64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_19bd68:
    if (ctx->pc == 0x19BD68u) {
        ctx->pc = 0x19BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD64u;
        // 0x19bd68: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD6Cu;
        goto label_19bd6c;
    }
    ctx->pc = 0x19BD64u;
    {
        const bool branch_taken_0x19bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd64) {
            ctx->pc = 0x19BD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BD64u;
            // 0x19bd68: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BD7Cu;
            goto label_19bd7c;
        }
    }
    ctx->pc = 0x19BD6Cu;
label_19bd6c:
    // 0x19bd6c: 0xc0675e0  jal         func_19D780
label_19bd70:
    if (ctx->pc == 0x19BD70u) {
        ctx->pc = 0x19BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD6Cu;
        // 0x19bd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD74u;
        goto label_19bd74;
    }
    ctx->pc = 0x19BD6Cu;
    SET_GPR_U32(ctx, 31, 0x19BD74u);
    ctx->pc = 0x19BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD6Cu;
    // 0x19bd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19BD6Cu, 0x19BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD74u;
label_19bd74:
    // 0x19bd74: 0x10000055  b           . + 4 + (0x55 << 2)
label_19bd78:
    if (ctx->pc == 0x19BD78u) {
        ctx->pc = 0x19BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD74u;
        // 0x19bd78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD7Cu;
        goto label_19bd7c;
    }
    ctx->pc = 0x19BD74u;
    {
        const bool branch_taken_0x19bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD74u;
        // 0x19bd78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd74) {
            ctx->pc = 0x19BECCu;
            goto label_19becc;
        }
    }
    ctx->pc = 0x19BD7Cu;
label_19bd7c:
    // 0x19bd7c: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x19bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
label_19bd80:
    // 0x19bd80: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_19bd84:
    if (ctx->pc == 0x19BD84u) {
        ctx->pc = 0x19BD88u;
        goto label_19bd88;
    }
    ctx->pc = 0x19BD80u;
    {
        const bool branch_taken_0x19bd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bd80) {
            ctx->pc = 0x19BDC0u;
            goto label_19bdc0;
        }
    }
    ctx->pc = 0x19BD88u;
label_19bd88:
    // 0x19bd88: 0xc061a1e  jal         func_186878
label_19bd8c:
    if (ctx->pc == 0x19BD8Cu) {
        ctx->pc = 0x19BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD88u;
        // 0x19bd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD90u;
        goto label_19bd90;
    }
    ctx->pc = 0x19BD88u;
    SET_GPR_U32(ctx, 31, 0x19BD90u);
    ctx->pc = 0x19BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD88u;
    // 0x19bd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19BD88u, 0x19BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD90u;
label_19bd90:
    // 0x19bd90: 0xc06e0e6  jal         func_1B8398
label_19bd94:
    if (ctx->pc == 0x19BD94u) {
        ctx->pc = 0x19BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD90u;
        // 0x19bd94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BD98u;
        goto label_19bd98;
    }
    ctx->pc = 0x19BD90u;
    SET_GPR_U32(ctx, 31, 0x19BD98u);
    ctx->pc = 0x19BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD90u;
    // 0x19bd94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19BD90u, 0x19BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD98u;
label_19bd98:
    // 0x19bd98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19bd9c:
    if (ctx->pc == 0x19BD9Cu) {
        ctx->pc = 0x19BDA0u;
        goto label_19bda0;
    }
    ctx->pc = 0x19BD98u;
    {
        const bool branch_taken_0x19bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bd98) {
            ctx->pc = 0x19BDB0u;
            goto label_19bdb0;
        }
    }
    ctx->pc = 0x19BDA0u;
label_19bda0:
    // 0x19bda0: 0xc067598  jal         func_19D660
label_19bda4:
    if (ctx->pc == 0x19BDA4u) {
        ctx->pc = 0x19BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDA0u;
        // 0x19bda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDA8u;
        goto label_19bda8;
    }
    ctx->pc = 0x19BDA0u;
    SET_GPR_U32(ctx, 31, 0x19BDA8u);
    ctx->pc = 0x19BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDA0u;
    // 0x19bda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19BDA0u, 0x19BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDA8u;
label_19bda8:
    // 0x19bda8: 0x10000048  b           . + 4 + (0x48 << 2)
label_19bdac:
    if (ctx->pc == 0x19BDACu) {
        ctx->pc = 0x19BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDA8u;
        // 0x19bdac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDB0u;
        goto label_19bdb0;
    }
    ctx->pc = 0x19BDA8u;
    {
        const bool branch_taken_0x19bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDA8u;
        // 0x19bdac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bda8) {
            ctx->pc = 0x19BECCu;
            goto label_19becc;
        }
    }
    ctx->pc = 0x19BDB0u;
label_19bdb0:
    // 0x19bdb0: 0xc067258  jal         func_19C960
label_19bdb4:
    if (ctx->pc == 0x19BDB4u) {
        ctx->pc = 0x19BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDB0u;
        // 0x19bdb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDB8u;
        goto label_19bdb8;
    }
    ctx->pc = 0x19BDB0u;
    SET_GPR_U32(ctx, 31, 0x19BDB8u);
    ctx->pc = 0x19BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDB0u;
    // 0x19bdb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19BDB0u, 0x19BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDB8u;
label_19bdb8:
    // 0x19bdb8: 0x10000044  b           . + 4 + (0x44 << 2)
label_19bdbc:
    if (ctx->pc == 0x19BDBCu) {
        ctx->pc = 0x19BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDB8u;
        // 0x19bdbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDC0u;
        goto label_19bdc0;
    }
    ctx->pc = 0x19BDB8u;
    {
        const bool branch_taken_0x19bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDB8u;
        // 0x19bdbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdb8) {
            ctx->pc = 0x19BECCu;
            goto label_19becc;
        }
    }
    ctx->pc = 0x19BDC0u;
label_19bdc0:
    // 0x19bdc0: 0xc066c74  jal         func_19B1D0
label_19bdc4:
    if (ctx->pc == 0x19BDC4u) {
        ctx->pc = 0x19BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDC0u;
        // 0x19bdc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDC8u;
        goto label_19bdc8;
    }
    ctx->pc = 0x19BDC0u;
    SET_GPR_U32(ctx, 31, 0x19BDC8u);
    ctx->pc = 0x19BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDC0u;
    // 0x19bdc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1D0u, 0x19BDC0u, 0x19BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDC8u;
label_19bdc8:
    // 0x19bdc8: 0xc061a12  jal         func_186848
label_19bdcc:
    if (ctx->pc == 0x19BDCCu) {
        ctx->pc = 0x19BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDC8u;
        // 0x19bdcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDD0u;
        goto label_19bdd0;
    }
    ctx->pc = 0x19BDC8u;
    SET_GPR_U32(ctx, 31, 0x19BDD0u);
    ctx->pc = 0x19BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDC8u;
    // 0x19bdcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19BDC8u, 0x19BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDD0u;
label_19bdd0:
    // 0x19bdd0: 0xc070116  jal         func_1C0458
label_19bdd4:
    if (ctx->pc == 0x19BDD4u) {
        ctx->pc = 0x19BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDD0u;
        // 0x19bdd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDD8u;
        goto label_19bdd8;
    }
    ctx->pc = 0x19BDD0u;
    SET_GPR_U32(ctx, 31, 0x19BDD8u);
    ctx->pc = 0x19BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDD0u;
    // 0x19bdd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0458u, 0x19BDD0u, 0x19BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDD8u;
label_19bdd8:
    // 0x19bdd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19bddc:
    if (ctx->pc == 0x19BDDCu) {
        ctx->pc = 0x19BDE0u;
        goto label_19bde0;
    }
    ctx->pc = 0x19BDD8u;
    {
        const bool branch_taken_0x19bdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bdd8) {
            ctx->pc = 0x19BDE8u;
            goto label_19bde8;
        }
    }
    ctx->pc = 0x19BDE0u;
label_19bde0:
    // 0x19bde0: 0xc066c1e  jal         func_19B078
label_19bde4:
    if (ctx->pc == 0x19BDE4u) {
        ctx->pc = 0x19BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDE0u;
        // 0x19bde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDE8u;
        goto label_19bde8;
    }
    ctx->pc = 0x19BDE0u;
    SET_GPR_U32(ctx, 31, 0x19BDE8u);
    ctx->pc = 0x19BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDE0u;
    // 0x19bde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B078u, 0x19BDE0u, 0x19BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDE8u;
label_19bde8:
    // 0x19bde8: 0xc061a12  jal         func_186848
label_19bdec:
    if (ctx->pc == 0x19BDECu) {
        ctx->pc = 0x19BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDE8u;
        // 0x19bdec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BDF0u;
        goto label_19bdf0;
    }
    ctx->pc = 0x19BDE8u;
    SET_GPR_U32(ctx, 31, 0x19BDF0u);
    ctx->pc = 0x19BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDE8u;
    // 0x19bdec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19BDE8u, 0x19BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDF0u;
label_19bdf0:
    // 0x19bdf0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19bdf4:
    // 0x19bdf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19bdf8:
    // 0x19bdf8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19bdfc:
    // 0x19bdfc: 0x40f809  jalr        $v0
label_19be00:
    if (ctx->pc == 0x19BE00u) {
        ctx->pc = 0x19BE04u;
        goto label_19be04;
    }
    ctx->pc = 0x19BDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BE04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BDFCu, 0x19BE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BE04u;
label_19be04:
    // 0x19be04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_19be08:
    if (ctx->pc == 0x19BE08u) {
        ctx->pc = 0x19BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE04u;
        // 0x19be08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE0Cu;
        goto label_19be0c;
    }
    ctx->pc = 0x19BE04u;
    {
        const bool branch_taken_0x19be04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE04u;
        // 0x19be08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be04) {
            ctx->pc = 0x19BE4Cu;
            goto label_19be4c;
        }
    }
    ctx->pc = 0x19BE0Cu;
label_19be0c:
    // 0x19be0c: 0xc061a1e  jal         func_186878
label_19be10:
    if (ctx->pc == 0x19BE10u) {
        ctx->pc = 0x19BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE0Cu;
        // 0x19be10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE14u;
        goto label_19be14;
    }
    ctx->pc = 0x19BE0Cu;
    SET_GPR_U32(ctx, 31, 0x19BE14u);
    ctx->pc = 0x19BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE0Cu;
    // 0x19be10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19BE0Cu, 0x19BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE14u;
label_19be14:
    // 0x19be14: 0xc06e0e6  jal         func_1B8398
label_19be18:
    if (ctx->pc == 0x19BE18u) {
        ctx->pc = 0x19BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE14u;
        // 0x19be18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE1Cu;
        goto label_19be1c;
    }
    ctx->pc = 0x19BE14u;
    SET_GPR_U32(ctx, 31, 0x19BE1Cu);
    ctx->pc = 0x19BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE14u;
    // 0x19be18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19BE14u, 0x19BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE1Cu;
label_19be1c:
    // 0x19be1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19be20:
    if (ctx->pc == 0x19BE20u) {
        ctx->pc = 0x19BE24u;
        goto label_19be24;
    }
    ctx->pc = 0x19BE1Cu;
    {
        const bool branch_taken_0x19be1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be1c) {
            ctx->pc = 0x19BE34u;
            goto label_19be34;
        }
    }
    ctx->pc = 0x19BE24u;
label_19be24:
    // 0x19be24: 0xc067258  jal         func_19C960
label_19be28:
    if (ctx->pc == 0x19BE28u) {
        ctx->pc = 0x19BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE24u;
        // 0x19be28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE2Cu;
        goto label_19be2c;
    }
    ctx->pc = 0x19BE24u;
    SET_GPR_U32(ctx, 31, 0x19BE2Cu);
    ctx->pc = 0x19BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE24u;
    // 0x19be28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19BE24u, 0x19BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE2Cu;
label_19be2c:
    // 0x19be2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_19be30:
    if (ctx->pc == 0x19BE30u) {
        ctx->pc = 0x19BE34u;
        goto label_19be34;
    }
    ctx->pc = 0x19BE2Cu;
    {
        const bool branch_taken_0x19be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be2c) {
            ctx->pc = 0x19BE3Cu;
            goto label_19be3c;
        }
    }
    ctx->pc = 0x19BE34u;
label_19be34:
    // 0x19be34: 0xc067598  jal         func_19D660
label_19be38:
    if (ctx->pc == 0x19BE38u) {
        ctx->pc = 0x19BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE34u;
        // 0x19be38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE3Cu;
        goto label_19be3c;
    }
    ctx->pc = 0x19BE34u;
    SET_GPR_U32(ctx, 31, 0x19BE3Cu);
    ctx->pc = 0x19BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE34u;
    // 0x19be38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19BE34u, 0x19BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE3Cu;
label_19be3c:
    // 0x19be3c: 0xc066c1e  jal         func_19B078
label_19be40:
    if (ctx->pc == 0x19BE40u) {
        ctx->pc = 0x19BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE3Cu;
        // 0x19be40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE44u;
        goto label_19be44;
    }
    ctx->pc = 0x19BE3Cu;
    SET_GPR_U32(ctx, 31, 0x19BE44u);
    ctx->pc = 0x19BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE3Cu;
    // 0x19be40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B078u, 0x19BE3Cu, 0x19BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE44u;
label_19be44:
    // 0x19be44: 0x10000021  b           . + 4 + (0x21 << 2)
label_19be48:
    if (ctx->pc == 0x19BE48u) {
        ctx->pc = 0x19BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE44u;
        // 0x19be48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE4Cu;
        goto label_19be4c;
    }
    ctx->pc = 0x19BE44u;
    {
        const bool branch_taken_0x19be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE44u;
        // 0x19be48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be44) {
            ctx->pc = 0x19BECCu;
            goto label_19becc;
        }
    }
    ctx->pc = 0x19BE4Cu;
label_19be4c:
    // 0x19be4c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19be50:
    // 0x19be50: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19be54:
    if (ctx->pc == 0x19BE54u) {
        ctx->pc = 0x19BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE50u;
        // 0x19be54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BE58u;
        goto label_19be58;
    }
    ctx->pc = 0x19BE50u;
    {
        const bool branch_taken_0x19be50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE50u;
        // 0x19be54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be50) {
            ctx->pc = 0x19BE6Cu;
            goto label_19be6c;
        }
    }
    ctx->pc = 0x19BE58u;
label_19be58:
    // 0x19be58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19be58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19be5c:
    // 0x19be5c: 0x0  nop
    ctx->pc = 0x19be5cu;
    // NOP
label_19be60:
    // 0x19be60: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19be60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19be64:
    // 0x19be64: 0x10000007  b           . + 4 + (0x7 << 2)
label_19be68:
    if (ctx->pc == 0x19BE68u) {
        ctx->pc = 0x19BE6Cu;
        goto label_19be6c;
    }
    ctx->pc = 0x19BE64u;
    {
        const bool branch_taken_0x19be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be64) {
            ctx->pc = 0x19BE84u;
            goto label_19be84;
        }
    }
    ctx->pc = 0x19BE6Cu;
label_19be6c:
    // 0x19be6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19be70:
    // 0x19be70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19be74:
    // 0x19be74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19be74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19be78:
    // 0x19be78: 0x0  nop
    ctx->pc = 0x19be78u;
    // NOP
label_19be7c:
    // 0x19be7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19be7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19be80:
    // 0x19be80: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19be80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19be84:
    // 0x19be84: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19be84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19be88:
    // 0x19be88: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19be88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19be8c:
    // 0x19be8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19be8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19be90:
    // 0x19be90: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x19be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19be94:
    // 0x19be94: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19be94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19be98:
    // 0x19be98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19be98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19be9c:
    // 0x19be9c: 0x0  nop
    ctx->pc = 0x19be9cu;
    // NOP
label_19bea0:
    // 0x19bea0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_19bea4:
    if (ctx->pc == 0x19BEA4u) {
        ctx->pc = 0x19BEA8u;
        goto label_19bea8;
    }
    ctx->pc = 0x19BEA0u;
    {
        const bool branch_taken_0x19bea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bea0) {
            ctx->pc = 0x19BEBCu;
            goto label_19bebc;
        }
    }
    ctx->pc = 0x19BEA8u;
label_19bea8:
    // 0x19bea8: 0xc061a1e  jal         func_186878
label_19beac:
    if (ctx->pc == 0x19BEACu) {
        ctx->pc = 0x19BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEA8u;
        // 0x19beac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEB0u;
        goto label_19beb0;
    }
    ctx->pc = 0x19BEA8u;
    SET_GPR_U32(ctx, 31, 0x19BEB0u);
    ctx->pc = 0x19BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEA8u;
    // 0x19beac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19BEA8u, 0x19BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEB0u;
label_19beb0:
    // 0x19beb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19beb4:
    // 0x19beb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_19beb8:
    if (ctx->pc == 0x19BEB8u) {
        ctx->pc = 0x19BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEB4u;
        // 0x19beb8: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEBCu;
        goto label_19bebc;
    }
    ctx->pc = 0x19BEB4u;
    {
        const bool branch_taken_0x19beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEB4u;
        // 0x19beb8: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19beb4) {
            ctx->pc = 0x19BEC8u;
            goto label_19bec8;
        }
    }
    ctx->pc = 0x19BEBCu;
label_19bebc:
    // 0x19bebc: 0xc061a1e  jal         func_186878
label_19bec0:
    if (ctx->pc == 0x19BEC0u) {
        ctx->pc = 0x19BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEBCu;
        // 0x19bec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEC4u;
        goto label_19bec4;
    }
    ctx->pc = 0x19BEBCu;
    SET_GPR_U32(ctx, 31, 0x19BEC4u);
    ctx->pc = 0x19BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEBCu;
    // 0x19bec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19BEBCu, 0x19BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEC4u;
label_19bec4:
    // 0x19bec4: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x19bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
label_19bec8:
    // 0x19bec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19becc:
    // 0x19becc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19beccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19bed0:
    // 0x19bed0: 0x3e00008  jr          $ra
label_19bed4:
    if (ctx->pc == 0x19BED4u) {
        ctx->pc = 0x19BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BED0u;
        // 0x19bed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BED8u;
        goto label_fallthrough_0x19bed0;
    }
    ctx->pc = 0x19BED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BED0u;
        // 0x19bed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19bed0:
    ctx->pc = 0x19BED8u;
}
