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

// Function: sub_00312160
// Address: 0x312160 - 0x312208
void sub_00312160_0x312160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312160_0x312160");
#endif

    switch (ctx->pc) {
        case 0x3121a8u: goto label_3121a8;
        case 0x3121d8u: goto label_3121d8;
        case 0x3121f4u: goto label_3121f4;
        default: break;
    }

    ctx->pc = 0x312160u;

    // 0x312160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x312164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x312164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x312168: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x312168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31216c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31216cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x312170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x312174: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x312174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x312178: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x312178u;
    {
        const bool branch_taken_0x312178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312178u;
        // 0x31217c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312178) {
            ctx->pc = 0x3121C4u;
            goto label_3121c4;
        }
    }
    ctx->pc = 0x312180u;
    // 0x312180: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x312180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x312184: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x312184u;
    {
        const bool branch_taken_0x312184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x312184) {
            ctx->pc = 0x312188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312184u;
            // 0x312188: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312198u;
            goto label_312198;
        }
    }
    ctx->pc = 0x31218Cu;
    // 0x31218c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x312190: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x312190u;
    {
        const bool branch_taken_0x312190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312190u;
        // 0x312194: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312190) {
            ctx->pc = 0x3121C4u;
            goto label_3121c4;
        }
    }
    ctx->pc = 0x312198u;
label_312198:
    // 0x312198: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x312198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31219c: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31219Cu;
    {
        const bool branch_taken_0x31219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3121A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31219Cu;
        // 0x3121a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31219c) {
            ctx->pc = 0x3121C0u;
            goto label_3121c0;
        }
    }
    ctx->pc = 0x3121A4u;
    // 0x3121a4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3121a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3121a8:
    // 0x3121a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3121a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3121ac: 0x0  nop
    ctx->pc = 0x3121acu;
    // NOP
    // 0x3121b0: 0x0  nop
    ctx->pc = 0x3121b0u;
    // NOP
    // 0x3121b4: 0x0  nop
    ctx->pc = 0x3121b4u;
    // NOP
    // 0x3121b8: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3121B8u;
    {
        const bool branch_taken_0x3121b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3121b8) {
            ctx->pc = 0x3121BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3121B8u;
            // 0x3121bc: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3121A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3121a8;
        }
    }
    ctx->pc = 0x3121C0u;
label_3121c0:
    // 0x3121c0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3121c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3121c4:
    // 0x3121c4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3121c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3121c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3121C8u;
    {
        const bool branch_taken_0x3121c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121C8u;
        // 0x3121cc: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121c8) {
            ctx->pc = 0x3121E0u;
            goto label_3121e0;
        }
    }
    ctx->pc = 0x3121D0u;
    // 0x3121d0: 0xc074f9e  jal         func_1D3E78
    ctx->pc = 0x3121D0u;
    SET_GPR_U32(ctx, 31, 0x3121D8u);
    ctx->pc = 0x3121D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3121D0u;
    // 0x3121d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3E78u, 0x3121D0u, 0x3121D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121D8u;
label_3121d8:
    // 0x3121d8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3121d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3121dc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3121dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_3121e0:
    // 0x3121e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3121E0u;
    {
        const bool branch_taken_0x3121e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121E0u;
        // 0x3121e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121e0) {
            ctx->pc = 0x3121F4u;
            goto label_3121f4;
        }
    }
    ctx->pc = 0x3121E8u;
    // 0x3121e8: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x3121e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x3121ec: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x3121ECu;
    SET_GPR_U32(ctx, 31, 0x3121F4u);
    ctx->pc = 0x3121F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3121ECu;
    // 0x3121f0: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x3121ECu, 0x3121F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121F4u;
label_3121f4:
    // 0x3121f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3121f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3121f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3121f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3121fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3121fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312200: 0x3e00008  jr          $ra
    ctx->pc = 0x312200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312200u;
        // 0x312204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312208u;
}
