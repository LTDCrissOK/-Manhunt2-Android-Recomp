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

// Function: sub_002B5B50
// Address: 0x2b5b50 - 0x2b5c80
void sub_002B5B50_0x2b5b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B50_0x2b5b50");
#endif

    switch (ctx->pc) {
        case 0x2b5bc8u: goto label_2b5bc8;
        case 0x2b5be0u: goto label_2b5be0;
        case 0x2b5bf8u: goto label_2b5bf8;
        case 0x2b5c10u: goto label_2b5c10;
        case 0x2b5c34u: goto label_2b5c34;
        case 0x2b5c50u: goto label_2b5c50;
        case 0x2b5c64u: goto label_2b5c64;
        case 0x2b5c78u: goto label_2b5c78;
        default: break;
    }

    ctx->pc = 0x2b5b50u;

    // 0x2b5b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5b58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b5b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b5b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b60: 0xae00590c  sw          $zero, 0x590C($s0)
    ctx->pc = 0x2b5b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 0));
    // 0x2b5b64: 0x8e0258f8  lw          $v0, 0x58F8($s0)
    ctx->pc = 0x2b5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b5b68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5B68u;
    {
        const bool branch_taken_0x2b5b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B68u;
        // 0x2b5b6c: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b68) {
            ctx->pc = 0x2B5B78u;
            goto label_2b5b78;
        }
    }
    ctx->pc = 0x2B5B70u;
    // 0x2b5b70: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2B5B70u;
    {
        const bool branch_taken_0x2b5b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B70u;
        // 0x2b5b74: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b70) {
            ctx->pc = 0x2B5C94u;
            return;
        }
    }
    ctx->pc = 0x2B5B78u;
label_2b5b78:
    // 0x2b5b78: 0x8c4305a0  lw          $v1, 0x5A0($v0)
    ctx->pc = 0x2b5b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1440)));
    // 0x2b5b7c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5B7Cu;
    {
        const bool branch_taken_0x2b5b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b7c) {
            ctx->pc = 0x2B5B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5B7Cu;
            // 0x2b5b80: 0x8e0258f8  lw          $v0, 0x58F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5B94u;
            goto label_2b5b94;
        }
    }
    ctx->pc = 0x2B5B84u;
    // 0x2b5b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5b88: 0xae0058f8  sw          $zero, 0x58F8($s0)
    ctx->pc = 0x2b5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 0));
    // 0x2b5b8c: 0xae02591c  sw          $v0, 0x591C($s0)
    ctx->pc = 0x2b5b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 2));
    // 0x2b5b90: 0x8e0258f8  lw          $v0, 0x58F8($s0)
    ctx->pc = 0x2b5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
label_2b5b94:
    // 0x2b5b94: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2b5b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b5b98: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x2b5b98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2b5b9c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2B5B9Cu;
    {
        const bool branch_taken_0x2b5b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B9Cu;
        // 0x2b5ba0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b9c) {
            ctx->pc = 0x2B5C90u;
            return;
        }
    }
    ctx->pc = 0x2B5BA4u;
    // 0x2b5ba4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5ba8: 0x2442fb50  addiu       $v0, $v0, -0x4B0
    ctx->pc = 0x2b5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966096));
    // 0x2b5bac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b5bb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5bb4: 0x800008  jr          $a0
    ctx->pc = 0x2B5BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5BBCu: goto label_2b5bbc;
            case 0x2B5BD0u: goto label_2b5bd0;
            case 0x2B5BE8u: goto label_2b5be8;
            case 0x2B5C00u: goto label_2b5c00;
            case 0x2B5C44u: goto label_2b5c44;
            case 0x2B5C58u: goto label_2b5c58;
            case 0x2B5C6Cu: goto label_2b5c6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5BB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B5BBCu;
label_2b5bbc:
    // 0x2b5bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bc0: 0xc0ad962  jal         func_2B6588
    ctx->pc = 0x2B5BC0u;
    SET_GPR_U32(ctx, 31, 0x2B5BC8u);
    ctx->pc = 0x2B5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BC0u;
    // 0x2b5bc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6588u, 0x2B5BC0u, 0x2B5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BC8u;
label_2b5bc8:
    // 0x2b5bc8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2B5BC8u;
    {
        const bool branch_taken_0x2b5bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BC8u;
        // 0x2b5bcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bc8) {
            ctx->pc = 0x2B5C98u;
            return;
        }
    }
    ctx->pc = 0x2B5BD0u;
label_2b5bd0:
    // 0x2b5bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b5bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5bd8: 0xc0add0c  jal         func_2B7430
    ctx->pc = 0x2B5BD8u;
    SET_GPR_U32(ctx, 31, 0x2B5BE0u);
    ctx->pc = 0x2B5BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BD8u;
    // 0x2b5bdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7430u, 0x2B5BD8u, 0x2B5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BE0u;
label_2b5be0:
    // 0x2b5be0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2B5BE0u;
    {
        const bool branch_taken_0x2b5be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BE0u;
        // 0x2b5be4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5be0) {
            ctx->pc = 0x2B5C98u;
            return;
        }
    }
    ctx->pc = 0x2B5BE8u;
label_2b5be8:
    // 0x2b5be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b5becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5bf0: 0xc0add0c  jal         func_2B7430
    ctx->pc = 0x2B5BF0u;
    SET_GPR_U32(ctx, 31, 0x2B5BF8u);
    ctx->pc = 0x2B5BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BF0u;
    // 0x2b5bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7430u, 0x2B5BF0u, 0x2B5BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BF8u;
label_2b5bf8:
    // 0x2b5bf8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2B5BF8u;
    {
        const bool branch_taken_0x2b5bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BF8u;
        // 0x2b5bfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bf8) {
            ctx->pc = 0x2B5C98u;
            return;
        }
    }
    ctx->pc = 0x2B5C00u;
label_2b5c00:
    // 0x2b5c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c08: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B5C08u;
    SET_GPR_U32(ctx, 31, 0x2B5C10u);
    ctx->pc = 0x2B5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C08u;
    // 0x2b5c0c: 0xae02590c  sw          $v0, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B5C08u, 0x2B5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C10u;
label_2b5c10:
    // 0x2b5c10: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B5C10u;
    {
        const bool branch_taken_0x2b5c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C10u;
        // 0x2b5c14: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c10) {
            ctx->pc = 0x2B5C90u;
            return;
        }
    }
    ctx->pc = 0x2B5C18u;
    // 0x2b5c18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b5c1c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2b5c20: 0xa060a930  sb          $zero, -0x56D0($v1)
    ctx->pc = 0x2b5c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294945072), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5c24: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b5c24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b5c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c2c: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B5C2Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C34u);
    ctx->pc = 0x2B5C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C2Cu;
    // 0x2b5c30: 0xa0a0a932  sb          $zero, -0x56CE($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294945074), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B5C2Cu, 0x2B5C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C34u;
label_2b5c34:
    // 0x2b5c34: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2b5c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b5c38: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2b5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b5c3c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B5C3Cu;
    {
        const bool branch_taken_0x2b5c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C3Cu;
        // 0x2b5c40: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c3c) {
            ctx->pc = 0x2B5C94u;
            return;
        }
    }
    ctx->pc = 0x2B5C44u;
label_2b5c44:
    // 0x2b5c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c48: 0xc0ad962  jal         func_2B6588
    ctx->pc = 0x2B5C48u;
    SET_GPR_U32(ctx, 31, 0x2B5C50u);
    ctx->pc = 0x2B5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C48u;
    // 0x2b5c4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6588u, 0x2B5C48u, 0x2B5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C50u;
label_2b5c50:
    // 0x2b5c50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B5C50u;
    {
        const bool branch_taken_0x2b5c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C50u;
        // 0x2b5c54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c50) {
            ctx->pc = 0x2B5C98u;
            return;
        }
    }
    ctx->pc = 0x2B5C58u;
label_2b5c58:
    // 0x2b5c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c5c: 0xc0ad962  jal         func_2B6588
    ctx->pc = 0x2B5C5Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C64u);
    ctx->pc = 0x2B5C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C5Cu;
    // 0x2b5c60: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6588u, 0x2B5C5Cu, 0x2B5C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C64u;
label_2b5c64:
    // 0x2b5c64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B5C64u;
    {
        const bool branch_taken_0x2b5c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C64u;
        // 0x2b5c68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c64) {
            ctx->pc = 0x2B5C98u;
            return;
        }
    }
    ctx->pc = 0x2B5C6Cu;
label_2b5c6c:
    // 0x2b5c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c70: 0xc0ad962  jal         func_2B6588
    ctx->pc = 0x2B5C70u;
    SET_GPR_U32(ctx, 31, 0x2B5C78u);
    ctx->pc = 0x2B5C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C70u;
    // 0x2b5c74: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6588u, 0x2B5C70u, 0x2B5C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C78u;
label_2b5c78:
    // 0x2b5c78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5C78u;
    {
        const bool branch_taken_0x2b5c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C78u;
        // 0x2b5c7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c78) {
            ctx->pc = 0x2B5C98u;
            return;
        }
    }
    ctx->pc = 0x2B5C80u;
}
