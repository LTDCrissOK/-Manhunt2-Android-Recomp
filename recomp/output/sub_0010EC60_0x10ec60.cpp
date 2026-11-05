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

// Function: sub_0010EC60
// Address: 0x10ec60 - 0x10ecc0
void sub_0010EC60_0x10ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EC60_0x10ec60");
#endif

    switch (ctx->pc) {
        case 0x10ec60u: goto label_10ec60;
        case 0x10ec64u: goto label_10ec64;
        case 0x10ec68u: goto label_10ec68;
        case 0x10ec6cu: goto label_10ec6c;
        case 0x10ec70u: goto label_10ec70;
        case 0x10ec74u: goto label_10ec74;
        case 0x10ec78u: goto label_10ec78;
        case 0x10ec7cu: goto label_10ec7c;
        case 0x10ec80u: goto label_10ec80;
        case 0x10ec84u: goto label_10ec84;
        case 0x10ec88u: goto label_10ec88;
        case 0x10ec8cu: goto label_10ec8c;
        case 0x10ec90u: goto label_10ec90;
        case 0x10ec94u: goto label_10ec94;
        case 0x10ec98u: goto label_10ec98;
        case 0x10ec9cu: goto label_10ec9c;
        case 0x10eca0u: goto label_10eca0;
        case 0x10eca4u: goto label_10eca4;
        case 0x10eca8u: goto label_10eca8;
        case 0x10ecacu: goto label_10ecac;
        case 0x10ecb0u: goto label_10ecb0;
        case 0x10ecb4u: goto label_10ecb4;
        case 0x10ecb8u: goto label_10ecb8;
        case 0x10ecbcu: goto label_10ecbc;
        default: break;
    }

    ctx->pc = 0x10ec60u;

label_10ec60:
    // 0x10ec60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10ec64:
    // 0x10ec64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10ec68:
    // 0x10ec68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10ec6c:
    // 0x10ec6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ec6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10ec70:
    // 0x10ec70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10ec74:
    // 0x10ec74: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_10ec78:
    if (ctx->pc == 0x10EC78u) {
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC7Cu;
        goto label_10ec7c;
    }
    ctx->pc = 0x10EC74u;
    {
        const bool branch_taken_0x10ec74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec74) {
            ctx->pc = 0x10EC8Cu;
            goto label_10ec8c;
        }
    }
    ctx->pc = 0x10EC7Cu;
label_10ec7c:
    // 0x10ec7c: 0xc0443da  jal         func_110F68
label_10ec80:
    if (ctx->pc == 0x10EC80u) {
        ctx->pc = 0x10EC84u;
        goto label_10ec84;
    }
    ctx->pc = 0x10EC7Cu;
    SET_GPR_U32(ctx, 31, 0x10EC84u);
    ctx->pc = 0x110F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F68u, 0x10EC7Cu, 0x10EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC84u;
label_10ec84:
    // 0x10ec84: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_10ec88:
    if (ctx->pc == 0x10EC88u) {
        ctx->pc = 0x10EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC84u;
        // 0x10ec88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC8Cu;
        goto label_10ec8c;
    }
    ctx->pc = 0x10EC84u;
    {
        const bool branch_taken_0x10ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec84) {
            ctx->pc = 0x10EC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC84u;
            // 0x10ec88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ECACu;
            goto label_10ecac;
        }
    }
    ctx->pc = 0x10EC8Cu;
label_10ec8c:
    // 0x10ec8c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x10ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_10ec90:
    // 0x10ec90: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_10ec94:
    if (ctx->pc == 0x10EC94u) {
        ctx->pc = 0x10EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC90u;
        // 0x10ec94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC98u;
        goto label_10ec98;
    }
    ctx->pc = 0x10EC90u;
    {
        const bool branch_taken_0x10ec90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC90u;
        // 0x10ec94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec90) {
            ctx->pc = 0x10ECACu;
            goto label_10ecac;
        }
    }
    ctx->pc = 0x10EC98u;
label_10ec98:
    // 0x10ec98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10ec9c:
    // 0x10ec9c: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x10ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_10eca0:
    // 0x10eca0: 0x40f809  jalr        $v0
label_10eca4:
    if (ctx->pc == 0x10ECA4u) {
        ctx->pc = 0x10ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECA0u;
        // 0x10eca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECA8u;
        goto label_10eca8;
    }
    ctx->pc = 0x10ECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10ECA8u);
        ctx->pc = 0x10ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECA0u;
        // 0x10eca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECA0u, 0x10ECA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10ECA8u;
label_10eca8:
    // 0x10eca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ecac:
    // 0x10ecac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ecacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10ecb0:
    // 0x10ecb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ecb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ecb4:
    // 0x10ecb4: 0x3e00008  jr          $ra
label_10ecb8:
    if (ctx->pc == 0x10ECB8u) {
        ctx->pc = 0x10ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECB4u;
        // 0x10ecb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECBCu;
        goto label_10ecbc;
    }
    ctx->pc = 0x10ECB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECB4u;
        // 0x10ecb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ECBCu;
label_10ecbc:
    // 0x10ecbc: 0x0  nop
    ctx->pc = 0x10ecbcu;
    // NOP
    ctx->pc = 0x10ecc0u;
}
