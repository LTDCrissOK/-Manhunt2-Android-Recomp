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

// Function: sub_001920A0
// Address: 0x1920a0 - 0x192128
void sub_001920A0_0x1920a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001920A0_0x1920a0");
#endif

    switch (ctx->pc) {
        case 0x1920a0u: goto label_1920a0;
        case 0x1920a4u: goto label_1920a4;
        case 0x1920a8u: goto label_1920a8;
        case 0x1920acu: goto label_1920ac;
        case 0x1920b0u: goto label_1920b0;
        case 0x1920b4u: goto label_1920b4;
        case 0x1920b8u: goto label_1920b8;
        case 0x1920bcu: goto label_1920bc;
        case 0x1920c0u: goto label_1920c0;
        case 0x1920c4u: goto label_1920c4;
        case 0x1920c8u: goto label_1920c8;
        case 0x1920ccu: goto label_1920cc;
        case 0x1920d0u: goto label_1920d0;
        case 0x1920d4u: goto label_1920d4;
        case 0x1920d8u: goto label_1920d8;
        case 0x1920dcu: goto label_1920dc;
        case 0x1920e0u: goto label_1920e0;
        case 0x1920e4u: goto label_1920e4;
        case 0x1920e8u: goto label_1920e8;
        case 0x1920ecu: goto label_1920ec;
        case 0x1920f0u: goto label_1920f0;
        case 0x1920f4u: goto label_1920f4;
        case 0x1920f8u: goto label_1920f8;
        case 0x1920fcu: goto label_1920fc;
        case 0x192100u: goto label_192100;
        case 0x192104u: goto label_192104;
        case 0x192108u: goto label_192108;
        case 0x19210cu: goto label_19210c;
        case 0x192110u: goto label_192110;
        case 0x192114u: goto label_192114;
        case 0x192118u: goto label_192118;
        case 0x19211cu: goto label_19211c;
        case 0x192120u: goto label_192120;
        case 0x192124u: goto label_192124;
        default: break;
    }

    ctx->pc = 0x1920a0u;

label_1920a0:
    // 0x1920a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1920a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1920a4:
    // 0x1920a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1920a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1920a8:
    // 0x1920a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1920a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1920ac:
    // 0x1920ac: 0x24420ff0  addiu       $v0, $v0, 0xFF0
    ctx->pc = 0x1920acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4080));
label_1920b0:
    // 0x1920b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1920b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1920b4:
    // 0x1920b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1920b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1920b8:
    // 0x1920b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1920b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1920bc:
    // 0x1920bc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1920bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1920c0:
    // 0x1920c0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1920c4:
    // 0x1920c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1920c8:
    if (ctx->pc == 0x1920C8u) {
        ctx->pc = 0x1920C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920C4u;
        // 0x1920c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920CCu;
        goto label_1920cc;
    }
    ctx->pc = 0x1920C4u;
    {
        const bool branch_taken_0x1920c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920C4u;
        // 0x1920c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920c4) {
            ctx->pc = 0x1920DCu;
            goto label_1920dc;
        }
    }
    ctx->pc = 0x1920CCu;
label_1920cc:
    // 0x1920cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1920d0:
    // 0x1920d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1920d4:
    // 0x1920d4: 0x40f809  jalr        $v0
label_1920d8:
    if (ctx->pc == 0x1920D8u) {
        ctx->pc = 0x1920D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920D4u;
        // 0x1920d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920DCu;
        goto label_1920dc;
    }
    ctx->pc = 0x1920D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1920DCu);
        ctx->pc = 0x1920D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920D4u;
        // 0x1920d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1920D4u, 0x1920DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1920DCu;
label_1920dc:
    // 0x1920dc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1920dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1920e0:
    // 0x1920e0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1920e4:
    if (ctx->pc == 0x1920E4u) {
        ctx->pc = 0x1920E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E0u;
        // 0x1920e4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920E8u;
        goto label_1920e8;
    }
    ctx->pc = 0x1920E0u;
    {
        const bool branch_taken_0x1920e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E0u;
        // 0x1920e4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920e0) {
            ctx->pc = 0x1920FCu;
            goto label_1920fc;
        }
    }
    ctx->pc = 0x1920E8u;
label_1920e8:
    // 0x1920e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1920e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1920ec:
    // 0x1920ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1920ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1920f0:
    // 0x1920f0: 0x40f809  jalr        $v0
label_1920f4:
    if (ctx->pc == 0x1920F4u) {
        ctx->pc = 0x1920F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F0u;
        // 0x1920f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920F8u;
        goto label_1920f8;
    }
    ctx->pc = 0x1920F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1920F8u);
        ctx->pc = 0x1920F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F0u;
        // 0x1920f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1920F0u, 0x1920F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1920F8u;
label_1920f8:
    // 0x1920f8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1920f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1920fc:
    // 0x1920fc: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1920fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_192100:
    // 0x192100: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x192100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_192104:
    // 0x192104: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_192108:
    if (ctx->pc == 0x192108u) {
        ctx->pc = 0x192108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192104u;
        // 0x192108: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19210Cu;
        goto label_19210c;
    }
    ctx->pc = 0x192104u;
    {
        const bool branch_taken_0x192104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192104u;
        // 0x192108: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192104) {
            ctx->pc = 0x192114u;
            goto label_192114;
        }
    }
    ctx->pc = 0x19210Cu;
label_19210c:
    // 0x19210c: 0xc0f5222  jal         func_3D4888
label_192110:
    if (ctx->pc == 0x192110u) {
        ctx->pc = 0x192110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19210Cu;
        // 0x192110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192114u;
        goto label_192114;
    }
    ctx->pc = 0x19210Cu;
    SET_GPR_U32(ctx, 31, 0x192114u);
    ctx->pc = 0x192110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19210Cu;
    // 0x192110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x19210Cu, 0x192114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192114u;
label_192114:
    // 0x192114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192118:
    // 0x192118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19211c:
    // 0x19211c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_192120:
    // 0x192120: 0x3e00008  jr          $ra
label_192124:
    if (ctx->pc == 0x192124u) {
        ctx->pc = 0x192124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192120u;
        // 0x192124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192128u;
        goto label_fallthrough_0x192120;
    }
    ctx->pc = 0x192120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192120u;
        // 0x192124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x192120:
    ctx->pc = 0x192128u;
}
