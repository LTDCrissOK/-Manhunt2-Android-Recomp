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

// Function: sub_00178930
// Address: 0x178930 - 0x178a08
void sub_00178930_0x178930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178930_0x178930");
#endif

    switch (ctx->pc) {
        case 0x178964u: goto label_178964;
        case 0x178990u: goto label_178990;
        case 0x1789c8u: goto label_1789c8;
        case 0x1789f4u: goto label_1789f4;
        default: break;
    }

    ctx->pc = 0x178930u;

    // 0x178930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178934: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x178934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x178938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17893c: 0x24420f60  addiu       $v0, $v0, 0xF60
    ctx->pc = 0x17893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
    // 0x178940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17894c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x178950: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x178950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x178954: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178954u;
    {
        const bool branch_taken_0x178954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178954u;
        // 0x178958: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178954) {
            ctx->pc = 0x178964u;
            goto label_178964;
        }
    }
    ctx->pc = 0x17895Cu;
    // 0x17895c: 0xc05e29e  jal         func_178A78
    ctx->pc = 0x17895Cu;
    SET_GPR_U32(ctx, 31, 0x178964u);
    ctx->pc = 0x178A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178A78u, 0x17895Cu, 0x178964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178964u;
label_178964:
    // 0x178964: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x178964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x178968: 0x26060210  addiu       $a2, $s0, 0x210
    ctx->pc = 0x178968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x17896c: 0x26070090  addiu       $a3, $s0, 0x90
    ctx->pc = 0x17896cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x178970: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x178970u;
    {
        const bool branch_taken_0x178970 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x178974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178970u;
        // 0x178974: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178970) {
            ctx->pc = 0x1789A8u;
            goto label_1789a8;
        }
    }
    ctx->pc = 0x178978u;
    // 0x178978: 0x26030530  addiu       $v1, $s0, 0x530
    ctx->pc = 0x178978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x17897c: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17897Cu;
    {
        const bool branch_taken_0x17897c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x17897c) {
            ctx->pc = 0x1789A8u;
            goto label_1789a8;
        }
    }
    ctx->pc = 0x178984u;
    // 0x178984: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x178984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178988: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x178988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x17898c: 0x0  nop
    ctx->pc = 0x17898cu;
    // NOP
label_178990:
    // 0x178990: 0x0  nop
    ctx->pc = 0x178990u;
    // NOP
    // 0x178994: 0x0  nop
    ctx->pc = 0x178994u;
    // NOP
    // 0x178998: 0x0  nop
    ctx->pc = 0x178998u;
    // NOP
    // 0x17899c: 0x0  nop
    ctx->pc = 0x17899cu;
    // NOP
    // 0x1789a0: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1789A0u;
    {
        const bool branch_taken_0x1789a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1789a0) {
            ctx->pc = 0x1789A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789A0u;
            // 0x1789a4: 0x2463ffd8  addiu       $v1, $v1, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178990;
        }
    }
    ctx->pc = 0x1789A8u;
label_1789a8:
    // 0x1789a8: 0x50e0000e  beql        $a3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1789A8u;
    {
        const bool branch_taken_0x1789a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1789a8) {
            ctx->pc = 0x1789ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789A8u;
            // 0x1789ac: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1789E4u;
            goto label_1789e4;
        }
    }
    ctx->pc = 0x1789B0u;
    // 0x1789b0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1789b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789b4: 0x50e3000b  beql        $a3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1789B4u;
    {
        const bool branch_taken_0x1789b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1789b4) {
            ctx->pc = 0x1789B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789B4u;
            // 0x1789b8: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1789E4u;
            goto label_1789e4;
        }
    }
    ctx->pc = 0x1789BCu;
    // 0x1789bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1789bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789c0: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x1789c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x1789c4: 0x0  nop
    ctx->pc = 0x1789c4u;
    // NOP
label_1789c8:
    // 0x1789c8: 0x0  nop
    ctx->pc = 0x1789c8u;
    // NOP
    // 0x1789cc: 0x0  nop
    ctx->pc = 0x1789ccu;
    // NOP
    // 0x1789d0: 0x0  nop
    ctx->pc = 0x1789d0u;
    // NOP
    // 0x1789d4: 0x0  nop
    ctx->pc = 0x1789d4u;
    // NOP
    // 0x1789d8: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1789D8u;
    {
        const bool branch_taken_0x1789d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1789d8) {
            ctx->pc = 0x1789DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789D8u;
            // 0x1789dc: 0x2463ffe8  addiu       $v1, $v1, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1789C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1789c8;
        }
    }
    ctx->pc = 0x1789E0u;
    // 0x1789e0: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_1789e4:
    // 0x1789e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1789E4u;
    {
        const bool branch_taken_0x1789e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789E4u;
        // 0x1789e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789e4) {
            ctx->pc = 0x1789F4u;
            goto label_1789f4;
        }
    }
    ctx->pc = 0x1789ECu;
    // 0x1789ec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1789ECu;
    SET_GPR_U32(ctx, 31, 0x1789F4u);
    ctx->pc = 0x1789F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789ECu;
    // 0x1789f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1789ECu, 0x1789F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789F4u;
label_1789f4:
    // 0x1789f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1789f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1789f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1789f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1789fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1789fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a00: 0x3e00008  jr          $ra
    ctx->pc = 0x178A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A00u;
        // 0x178a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178A08u;
}
