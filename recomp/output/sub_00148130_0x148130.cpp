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

// Function: sub_00148130
// Address: 0x148130 - 0x1481f0
void sub_00148130_0x148130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148130_0x148130");
#endif

    switch (ctx->pc) {
        case 0x148158u: goto label_148158;
        case 0x14816cu: goto label_14816c;
        case 0x148188u: goto label_148188;
        case 0x148194u: goto label_148194;
        case 0x1481a0u: goto label_1481a0;
        case 0x1481b0u: goto label_1481b0;
        case 0x1481ccu: goto label_1481cc;
        case 0x1481d8u: goto label_1481d8;
        default: break;
    }

    ctx->pc = 0x148130u;

    // 0x148130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14813c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14813cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148140: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x148140u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x148144: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x148144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x148148: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x148148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14814c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14814cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148150: 0xc05238e  jal         func_148E38
    ctx->pc = 0x148150u;
    SET_GPR_U32(ctx, 31, 0x148158u);
    ctx->pc = 0x148154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148150u;
    // 0x148154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E38u, 0x148150u, 0x148158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148158u;
label_148158:
    // 0x148158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14815c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14815Cu;
    {
        const bool branch_taken_0x14815c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x148160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14815Cu;
        // 0x148160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14815c) {
            ctx->pc = 0x148174u;
            goto label_148174;
        }
    }
    ctx->pc = 0x148164u;
    // 0x148164: 0xc05238e  jal         func_148E38
    ctx->pc = 0x148164u;
    SET_GPR_U32(ctx, 31, 0x14816Cu);
    ctx->pc = 0x148168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148164u;
    // 0x148168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E38u, 0x148164u, 0x14816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14816Cu;
label_14816c:
    // 0x14816c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14816Cu;
    {
        const bool branch_taken_0x14816c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14816c) {
            ctx->pc = 0x148170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14816Cu;
            // 0x148170: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14817Cu;
            goto label_14817c;
        }
    }
    ctx->pc = 0x148174u;
label_148174:
    // 0x148174: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x148174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148178: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14817c:
    // 0x14817c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14817cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148180: 0xc052388  jal         func_148E20
    ctx->pc = 0x148180u;
    SET_GPR_U32(ctx, 31, 0x148188u);
    ctx->pc = 0x148184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148180u;
    // 0x148184: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x148180u, 0x148188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148188u;
label_148188:
    // 0x148188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14818c: 0xc0523de  jal         func_148F78
    ctx->pc = 0x14818Cu;
    SET_GPR_U32(ctx, 31, 0x148194u);
    ctx->pc = 0x148190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14818Cu;
    // 0x148190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F78u, 0x14818Cu, 0x148194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148194u;
label_148194:
    // 0x148194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148198: 0xc05242e  jal         func_1490B8
    ctx->pc = 0x148198u;
    SET_GPR_U32(ctx, 31, 0x1481A0u);
    ctx->pc = 0x14819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148198u;
    // 0x14819c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B8u, 0x148198u, 0x1481A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481A0u;
label_1481a0:
    // 0x1481a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1481a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1481a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481a8: 0xc04d88a  jal         func_136228
    ctx->pc = 0x1481A8u;
    SET_GPR_U32(ctx, 31, 0x1481B0u);
    ctx->pc = 0x1481ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481A8u;
    // 0x1481ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x1481A8u, 0x1481B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481B0u;
label_1481b0:
    // 0x1481b0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1481B0u;
    {
        const bool branch_taken_0x1481b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1481B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481B0u;
        // 0x1481b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1481b0) {
            ctx->pc = 0x1481BCu;
            goto label_1481bc;
        }
    }
    ctx->pc = 0x1481B8u;
    // 0x1481b8: 0xae020700  sw          $v0, 0x700($s0)
    ctx->pc = 0x1481b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 2));
label_1481bc:
    // 0x1481bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1481bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1481c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481c4: 0xc052698  jal         func_149A60
    ctx->pc = 0x1481C4u;
    SET_GPR_U32(ctx, 31, 0x1481CCu);
    ctx->pc = 0x1481C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481C4u;
    // 0x1481c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149A60u, 0x1481C4u, 0x1481CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481CCu;
label_1481cc:
    // 0x1481cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1481ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481d0: 0xc05249a  jal         func_149268
    ctx->pc = 0x1481D0u;
    SET_GPR_U32(ctx, 31, 0x1481D8u);
    ctx->pc = 0x1481D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481D0u;
    // 0x1481d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149268u, 0x1481D0u, 0x1481D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481D8u;
label_1481d8:
    // 0x1481d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1481d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1481dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1481dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1481e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1481e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1481e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1481e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1481e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1481E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1481ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481E8u;
        // 0x1481ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1481E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1481F0u;
}
