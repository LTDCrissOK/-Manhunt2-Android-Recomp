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

// Function: sub_001AB700
// Address: 0x1ab700 - 0x1ab798
void sub_001AB700_0x1ab700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB700_0x1ab700");
#endif

    switch (ctx->pc) {
        case 0x1ab74cu: goto label_1ab74c;
        case 0x1ab774u: goto label_1ab774;
        case 0x1ab784u: goto label_1ab784;
        default: break;
    }

    ctx->pc = 0x1ab700u;

    // 0x1ab700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab708: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab710: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x1ab710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1ab714: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB714u;
    {
        const bool branch_taken_0x1ab714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab714) {
            ctx->pc = 0x1AB718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB714u;
            // 0x1ab718: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB738u;
            goto label_1ab738;
        }
    }
    ctx->pc = 0x1AB71Cu;
    // 0x1ab71c: 0x8e0301e8  lw          $v1, 0x1E8($s0)
    ctx->pc = 0x1ab71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x1ab720: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x1ab720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x1ab724: 0xae0301e4  sw          $v1, 0x1E4($s0)
    ctx->pc = 0x1ab724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 3));
    // 0x1ab728: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ab728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1ab72c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ab72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1ab730: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AB730u;
    {
        const bool branch_taken_0x1ab730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB730u;
        // 0x1ab734: 0xa462002a  sh          $v0, 0x2A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab730) {
            ctx->pc = 0x1AB784u;
            goto label_1ab784;
        }
    }
    ctx->pc = 0x1AB738u;
label_1ab738:
    // 0x1ab738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB738u;
    {
        const bool branch_taken_0x1ab738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB738u;
        // 0x1ab73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab738) {
            ctx->pc = 0x1AB754u;
            goto label_1ab754;
        }
    }
    ctx->pc = 0x1AB740u;
    // 0x1ab740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab744: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB744u;
    SET_GPR_U32(ctx, 31, 0x1AB74Cu);
    ctx->pc = 0x1AB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB744u;
    // 0x1ab748: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB744u, 0x1AB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB74Cu;
label_1ab74c:
    // 0x1ab74c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AB74Cu;
    {
        const bool branch_taken_0x1ab74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB74Cu;
        // 0x1ab750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab74c) {
            ctx->pc = 0x1AB788u;
            goto label_1ab788;
        }
    }
    ctx->pc = 0x1AB754u;
label_1ab754:
    // 0x1ab754: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ab754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1ab758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ab75c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB75Cu;
    {
        const bool branch_taken_0x1ab75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB75Cu;
        // 0x1ab760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab75c) {
            ctx->pc = 0x1AB77Cu;
            goto label_1ab77c;
        }
    }
    ctx->pc = 0x1AB764u;
    // 0x1ab764: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab768: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ab768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab76c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AB76Cu;
    SET_GPR_U32(ctx, 31, 0x1AB774u);
    ctx->pc = 0x1AB770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB76Cu;
    // 0x1ab770: 0x8e0401e8  lw          $a0, 0x1E8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AB76Cu, 0x1AB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB774u;
label_1ab774:
    // 0x1ab774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab778: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab77c:
    // 0x1ab77c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB77Cu;
    SET_GPR_U32(ctx, 31, 0x1AB784u);
    ctx->pc = 0x1AB780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB77Cu;
    // 0x1ab780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB77Cu, 0x1AB784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB784u;
label_1ab784:
    // 0x1ab784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab788:
    // 0x1ab788: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab78c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB78Cu;
        // 0x1ab790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB794u;
    // 0x1ab794: 0x0  nop
    ctx->pc = 0x1ab794u;
    // NOP
    ctx->pc = 0x1ab798u;
}
