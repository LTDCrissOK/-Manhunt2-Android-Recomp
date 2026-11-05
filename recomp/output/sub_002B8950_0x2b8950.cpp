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

// Function: sub_002B8950
// Address: 0x2b8950 - 0x2b8a20
void sub_002B8950_0x2b8950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8950_0x2b8950");
#endif

    switch (ctx->pc) {
        case 0x2b8968u: goto label_2b8968;
        case 0x2b8970u: goto label_2b8970;
        case 0x2b89b0u: goto label_2b89b0;
        case 0x2b89c4u: goto label_2b89c4;
        case 0x2b89d8u: goto label_2b89d8;
        case 0x2b89f0u: goto label_2b89f0;
        case 0x2b89fcu: goto label_2b89fc;
        default: break;
    }

    ctx->pc = 0x2b8950u;

    // 0x2b8950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b895c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b895cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b8960: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B8960u;
    SET_GPR_U32(ctx, 31, 0x2B8968u);
    ctx->pc = 0x2B8964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8960u;
    // 0x2b8964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B8960u, 0x2B8968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8968u;
label_2b8968:
    // 0x2b8968: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B8968u;
    SET_GPR_U32(ctx, 31, 0x2B8970u);
    ctx->pc = 0x2B896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8968u;
    // 0x2b896c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B8968u, 0x2B8970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8970u;
label_2b8970:
    // 0x2b8970: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b8970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b8974: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b8974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b8978: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B8978u;
    {
        const bool branch_taken_0x2b8978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8978u;
        // 0x2b897c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8978) {
            ctx->pc = 0x2B89A4u;
            goto label_2b89a4;
        }
    }
    ctx->pc = 0x2B8980u;
    // 0x2b8980: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b8980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b8984: 0xae025910  sw          $v0, 0x5910($s0)
    ctx->pc = 0x2b8984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 2));
    // 0x2b8988: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2b8988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2b898c: 0xa060a928  sb          $zero, -0x56D8($v1)
    ctx->pc = 0x2b898cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b8990: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b8990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8994: 0xac80a320  sw          $zero, -0x5CE0($a0)
    ctx->pc = 0x2b8994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b8998: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b899c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B899Cu;
    {
        const bool branch_taken_0x2b899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B899Cu;
        // 0x2b89a0: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b899c) {
            ctx->pc = 0x2B8A08u;
            goto label_2b8a08;
        }
    }
    ctx->pc = 0x2B89A4u;
label_2b89a4:
    // 0x2b89a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b89a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89a8: 0xc0ad684  jal         func_2B5A10
    ctx->pc = 0x2B89A8u;
    SET_GPR_U32(ctx, 31, 0x2B89B0u);
    ctx->pc = 0x2B89ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89A8u;
    // 0x2b89ac: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A10u, 0x2B89A8u, 0x2B89B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89B0u;
label_2b89b0:
    // 0x2b89b0: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B89B0u;
    {
        const bool branch_taken_0x2b89b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89B0u;
        // 0x2b89b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89b0) {
            ctx->pc = 0x2B89D0u;
            goto label_2b89d0;
        }
    }
    ctx->pc = 0x2B89B8u;
    // 0x2b89b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b89b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89bc: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B89BCu;
    SET_GPR_U32(ctx, 31, 0x2B89C4u);
    ctx->pc = 0x2B89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89BCu;
    // 0x2b89c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B89BCu, 0x2B89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89C4u;
label_2b89c4:
    // 0x2b89c4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2b89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b89c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B89C8u;
    {
        const bool branch_taken_0x2b89c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89C8u;
        // 0x2b89cc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89c8) {
            ctx->pc = 0x2B8A04u;
            goto label_2b8a04;
        }
    }
    ctx->pc = 0x2B89D0u;
label_2b89d0:
    // 0x2b89d0: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B89D0u;
    SET_GPR_U32(ctx, 31, 0x2B89D8u);
    ctx->pc = 0x2B89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89D0u;
    // 0x2b89d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B89D0u, 0x2B89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89D8u;
label_2b89d8:
    // 0x2b89d8: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B89D8u;
    {
        const bool branch_taken_0x2b89d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89D8u;
        // 0x2b89dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89d8) {
            ctx->pc = 0x2B8A08u;
            goto label_2b8a08;
        }
    }
    ctx->pc = 0x2B89E0u;
    // 0x2b89e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b89e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89e4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2b89e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b89e8: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B89E8u;
    SET_GPR_U32(ctx, 31, 0x2B89F0u);
    ctx->pc = 0x2B89ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89E8u;
    // 0x2b89ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B89E8u, 0x2B89F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89F0u;
label_2b89f0:
    // 0x2b89f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b89f4: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x2B89F4u;
    SET_GPR_U32(ctx, 31, 0x2B89FCu);
    ctx->pc = 0x2B89F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89F4u;
    // 0x2b89f8: 0x8c44a300  lw          $a0, -0x5D00($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x2B89F4u, 0x2B89FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89FCu;
label_2b89fc:
    // 0x2b89fc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2b89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b8a00: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2b8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b8a04:
    // 0x2b8a04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b8a08:
    // 0x2b8a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8a0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b8a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8a14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A14u;
        // 0x2b8a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A1Cu;
    // 0x2b8a1c: 0x0  nop
    ctx->pc = 0x2b8a1cu;
    // NOP
    ctx->pc = 0x2b8a20u;
}
