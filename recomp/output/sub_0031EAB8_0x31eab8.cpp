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

// Function: sub_0031EAB8
// Address: 0x31eab8 - 0x31eb20
void sub_0031EAB8_0x31eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EAB8_0x31eab8");
#endif

    switch (ctx->pc) {
        case 0x31ead4u: goto label_31ead4;
        case 0x31eb0cu: goto label_31eb0c;
        default: break;
    }

    ctx->pc = 0x31eab8u;

    // 0x31eab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31eab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31eabc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31eabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31eac0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31eac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31eac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31eacc: 0xc0c7b02  jal         func_31EC08
    ctx->pc = 0x31EACCu;
    SET_GPR_U32(ctx, 31, 0x31EAD4u);
    ctx->pc = 0x31EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EACCu;
    // 0x31ead0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC08u, 0x31EACCu, 0x31EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAD4u;
label_31ead4:
    // 0x31ead4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ead8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31EAD8u;
    {
        const bool branch_taken_0x31ead8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAD8u;
        // 0x31eadc: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ead8) {
            ctx->pc = 0x31EAFCu;
            goto label_31eafc;
        }
    }
    ctx->pc = 0x31EAE0u;
    // 0x31eae0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31eae4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x31eae8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31eaec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31eaf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x31eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x31eaf4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x31eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x31eaf8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_31eafc:
    // 0x31eafc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EAFCu;
    {
        const bool branch_taken_0x31eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eafc) {
            ctx->pc = 0x31EB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EAFCu;
            // 0x31eb00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EB10u;
            goto label_31eb10;
        }
    }
    ctx->pc = 0x31EB04u;
    // 0x31eb04: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x31EB04u;
    SET_GPR_U32(ctx, 31, 0x31EB0Cu);
    ctx->pc = 0x31EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB04u;
    // 0x31eb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x31EB04u, 0x31EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB0Cu;
label_31eb0c:
    // 0x31eb0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31eb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31eb10:
    // 0x31eb10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31eb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31eb14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31eb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31eb18: 0x3e00008  jr          $ra
    ctx->pc = 0x31EB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB18u;
        // 0x31eb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EB20u;
}
