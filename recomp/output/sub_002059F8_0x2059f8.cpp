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

// Function: sub_002059F8
// Address: 0x2059f8 - 0x205a58
void sub_002059F8_0x2059f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002059F8_0x2059f8");
#endif

    switch (ctx->pc) {
        case 0x2059f8u: goto label_2059f8;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a00u: goto label_205a00;
        case 0x205a04u: goto label_205a04;
        case 0x205a08u: goto label_205a08;
        case 0x205a0cu: goto label_205a0c;
        case 0x205a10u: goto label_205a10;
        case 0x205a14u: goto label_205a14;
        case 0x205a18u: goto label_205a18;
        case 0x205a1cu: goto label_205a1c;
        case 0x205a20u: goto label_205a20;
        case 0x205a24u: goto label_205a24;
        case 0x205a28u: goto label_205a28;
        case 0x205a2cu: goto label_205a2c;
        case 0x205a30u: goto label_205a30;
        case 0x205a34u: goto label_205a34;
        case 0x205a38u: goto label_205a38;
        case 0x205a3cu: goto label_205a3c;
        case 0x205a40u: goto label_205a40;
        case 0x205a44u: goto label_205a44;
        case 0x205a48u: goto label_205a48;
        case 0x205a4cu: goto label_205a4c;
        case 0x205a50u: goto label_205a50;
        case 0x205a54u: goto label_205a54;
        default: break;
    }

    ctx->pc = 0x2059f8u;

label_2059f8:
    // 0x2059f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2059f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2059fc:
    // 0x2059fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2059fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_205a00:
    // 0x205a00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_205a04:
    // 0x205a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205a08:
    // 0x205a08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x205a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_205a0c:
    // 0x205a0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x205a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_205a10:
    // 0x205a10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x205a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_205a14:
    // 0x205a14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205a18:
    // 0x205a18: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x205a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_205a1c:
    // 0x205a1c: 0x40f809  jalr        $v0
label_205a20:
    if (ctx->pc == 0x205A20u) {
        ctx->pc = 0x205A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A1Cu;
        // 0x205a20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A24u;
        goto label_205a24;
    }
    ctx->pc = 0x205A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205A24u);
        ctx->pc = 0x205A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A1Cu;
        // 0x205a20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A1Cu, 0x205A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205A24u;
label_205a24:
    // 0x205a24: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205a28:
    // 0x205a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205a2c:
    // 0x205a2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_205a30:
    // 0x205a30: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x205a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_205a34:
    // 0x205a34: 0x40f809  jalr        $v0
label_205a38:
    if (ctx->pc == 0x205A38u) {
        ctx->pc = 0x205A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A34u;
        // 0x205a38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A3Cu;
        goto label_205a3c;
    }
    ctx->pc = 0x205A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205A3Cu);
        ctx->pc = 0x205A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A34u;
        // 0x205a38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A34u, 0x205A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205A3Cu;
label_205a3c:
    // 0x205a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205a40:
    // 0x205a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_205a44:
    // 0x205a44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_205a48:
    // 0x205a48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x205a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_205a4c:
    // 0x205a4c: 0x3e00008  jr          $ra
label_205a50:
    if (ctx->pc == 0x205A50u) {
        ctx->pc = 0x205A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A4Cu;
        // 0x205a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A54u;
        goto label_205a54;
    }
    ctx->pc = 0x205A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A4Cu;
        // 0x205a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A54u;
label_205a54:
    // 0x205a54: 0x0  nop
    ctx->pc = 0x205a54u;
    // NOP
    ctx->pc = 0x205a58u;
}
