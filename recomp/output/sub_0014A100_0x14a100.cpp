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

// Function: sub_0014A100
// Address: 0x14a100 - 0x14a1d8
void sub_0014A100_0x14a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A100_0x14a100");
#endif

    switch (ctx->pc) {
        case 0x14a134u: goto label_14a134;
        case 0x14a160u: goto label_14a160;
        case 0x14a198u: goto label_14a198;
        case 0x14a1c4u: goto label_14a1c4;
        default: break;
    }

    ctx->pc = 0x14a100u;

    // 0x14a100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a104: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14a104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14a108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a10c: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x14a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x14a110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a11c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14a120: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14a124: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A124u;
    {
        const bool branch_taken_0x14a124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A124u;
        // 0x14a128: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a124) {
            ctx->pc = 0x14A134u;
            goto label_14a134;
        }
    }
    ctx->pc = 0x14A12Cu;
    // 0x14a12c: 0xc05288a  jal         func_14A228
    ctx->pc = 0x14A12Cu;
    SET_GPR_U32(ctx, 31, 0x14A134u);
    ctx->pc = 0x14A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A228u, 0x14A12Cu, 0x14A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A134u;
label_14a134:
    // 0x14a134: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x14a134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x14a138: 0x260405a0  addiu       $a0, $s0, 0x5A0
    ctx->pc = 0x14a138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x14a13c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14a140: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14a144: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14A144u;
    {
        const bool branch_taken_0x14a144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A144u;
        // 0x14a148: 0x3c070043  lui         $a3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a144) {
            ctx->pc = 0x14A178u;
            goto label_14a178;
        }
    }
    ctx->pc = 0x14A14Cu;
    // 0x14a14c: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x14a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x14a150: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14A150u;
    {
        const bool branch_taken_0x14a150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14a150) {
            ctx->pc = 0x14A154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A150u;
            // 0x14a154: 0x244205f0  addiu       $v0, $v0, 0x5F0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A17Cu;
            goto label_14a17c;
        }
    }
    ctx->pc = 0x14A158u;
    // 0x14a158: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x14a158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x14a15c: 0x0  nop
    ctx->pc = 0x14a15cu;
    // NOP
label_14a160:
    // 0x14a160: 0x0  nop
    ctx->pc = 0x14a160u;
    // NOP
    // 0x14a164: 0x0  nop
    ctx->pc = 0x14a164u;
    // NOP
    // 0x14a168: 0x0  nop
    ctx->pc = 0x14a168u;
    // NOP
    // 0x14a16c: 0x0  nop
    ctx->pc = 0x14a16cu;
    // NOP
    // 0x14a170: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14A170u;
    {
        const bool branch_taken_0x14a170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a170) {
            ctx->pc = 0x14A174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A170u;
            // 0x14a174: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a160;
        }
    }
    ctx->pc = 0x14A178u;
label_14a178:
    // 0x14a178: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x14a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_14a17c:
    // 0x14a17c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x14A17Cu;
    {
        const bool branch_taken_0x14a17c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A17Cu;
        // 0x14a180: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a17c) {
            ctx->pc = 0x14A1B0u;
            goto label_14a1b0;
        }
    }
    ctx->pc = 0x14A184u;
    // 0x14a184: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x14a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x14a188: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14A188u;
    {
        const bool branch_taken_0x14a188 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a188) {
            ctx->pc = 0x14A18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A188u;
            // 0x14a18c: 0x24e20638  addiu       $v0, $a3, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A1B4u;
            goto label_14a1b4;
        }
    }
    ctx->pc = 0x14A190u;
    // 0x14a190: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x14a190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a194: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x14a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_14a198:
    // 0x14a198: 0x0  nop
    ctx->pc = 0x14a198u;
    // NOP
    // 0x14a19c: 0x0  nop
    ctx->pc = 0x14a19cu;
    // NOP
    // 0x14a1a0: 0x0  nop
    ctx->pc = 0x14a1a0u;
    // NOP
    // 0x14a1a4: 0x0  nop
    ctx->pc = 0x14a1a4u;
    // NOP
    // 0x14a1a8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14A1A8u;
    {
        const bool branch_taken_0x14a1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1A8u;
        // 0x14a1ac: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1a8) {
            ctx->pc = 0x14A198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a198;
        }
    }
    ctx->pc = 0x14A1B0u;
label_14a1b0:
    // 0x14a1b0: 0x24e20638  addiu       $v0, $a3, 0x638
    ctx->pc = 0x14a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
label_14a1b4:
    // 0x14a1b4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A1B4u;
    {
        const bool branch_taken_0x14a1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1B4u;
        // 0x14a1b8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1b4) {
            ctx->pc = 0x14A1C4u;
            goto label_14a1c4;
        }
    }
    ctx->pc = 0x14A1BCu;
    // 0x14a1bc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x14A1BCu;
    SET_GPR_U32(ctx, 31, 0x14A1C4u);
    ctx->pc = 0x14A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1BCu;
    // 0x14a1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x14A1BCu, 0x14A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1C4u;
label_14a1c4:
    // 0x14a1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a1c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a1cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1D0u;
        // 0x14a1d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A1D8u;
}
