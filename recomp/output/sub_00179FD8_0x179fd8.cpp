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

// Function: sub_00179FD8
// Address: 0x179fd8 - 0x17a0f8
void sub_00179FD8_0x179fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179FD8_0x179fd8");
#endif

    switch (ctx->pc) {
        case 0x17a020u: goto label_17a020;
        case 0x17a06cu: goto label_17a06c;
        case 0x17a080u: goto label_17a080;
        case 0x17a090u: goto label_17a090;
        case 0x17a0a0u: goto label_17a0a0;
        default: break;
    }

    ctx->pc = 0x179fd8u;

    // 0x179fd8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x179fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x179fdc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x179fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x179fe0: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x179fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x179fe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179fe8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x179fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x179fec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x179fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ff0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x179ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x179ff4: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x179ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x179ff8: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x179ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x179ffc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x179ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x17a000: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x17a000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x17a004: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17a004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x17a008: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x17A008u;
    {
        const bool branch_taken_0x17a008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A008u;
        // 0x17a00c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a008) {
            ctx->pc = 0x17A0D0u;
            goto label_17a0d0;
        }
    }
    ctx->pc = 0x17A010u;
    // 0x17a010: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x17a010u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17a014: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x17a014u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17a018: 0x961018  mult        $v0, $a0, $s6
    ctx->pc = 0x17a018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17a01c: 0x0  nop
    ctx->pc = 0x17a01cu;
    // NOP
label_17a020:
    // 0x17a020: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x17a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x17a024: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x17a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17a028: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17a02c: 0x10750021  beq         $v1, $s5, . + 4 + (0x21 << 2)
    ctx->pc = 0x17A02Cu;
    {
        const bool branch_taken_0x17a02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x17A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A02Cu;
        // 0x17a030: 0x24940001  addiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a02c) {
            ctx->pc = 0x17A0B4u;
            goto label_17a0b4;
        }
    }
    ctx->pc = 0x17A034u;
    // 0x17a034: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x17a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17a038: 0x92430531  lbu         $v1, 0x531($s2)
    ctx->pc = 0x17a038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1329)));
    // 0x17a03c: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x17A03Cu;
    {
        const bool branch_taken_0x17a03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A03Cu;
        // 0x17a040: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a03c) {
            ctx->pc = 0x17A0B4u;
            goto label_17a0b4;
        }
    }
    ctx->pc = 0x17A044u;
    // 0x17a044: 0x90a6001c  lbu         $a2, 0x1C($a1)
    ctx->pc = 0x17a044u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x17a048: 0x90a3001d  lbu         $v1, 0x1D($a1)
    ctx->pc = 0x17a048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 29)));
    // 0x17a04c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x17a04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x17a050: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17A050u;
    {
        const bool branch_taken_0x17a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A050u;
        // 0x17a054: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a050) {
            ctx->pc = 0x17A0B4u;
            goto label_17a0b4;
        }
    }
    ctx->pc = 0x17A058u;
    // 0x17a058: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x17a058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17a05c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a060: 0xa0a20020  sb          $v0, 0x20($a1)
    ctx->pc = 0x17a060u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a064: 0xc04f87a  jal         func_13E1E8
    ctx->pc = 0x17A064u;
    SET_GPR_U32(ctx, 31, 0x17A06Cu);
    ctx->pc = 0x17A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A064u;
    // 0x17a068: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1E8u, 0x17A064u, 0x17A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A06Cu;
label_17a06c:
    // 0x17a06c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a070: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A070u;
    {
        const bool branch_taken_0x17a070 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A070u;
        // 0x17a074: 0x328400ff  andi        $a0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a070) {
            ctx->pc = 0x17A0B8u;
            goto label_17a0b8;
        }
    }
    ctx->pc = 0x17A078u;
    // 0x17a078: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17a078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17a07c: 0x0  nop
    ctx->pc = 0x17a07cu;
    // NOP
label_17a080:
    // 0x17a080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a084: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x17a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x17a088: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x17A088u;
    SET_GPR_U32(ctx, 31, 0x17A090u);
    ctx->pc = 0x17A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A088u;
    // 0x17a08c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x17A088u, 0x17A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A090u;
label_17a090:
    // 0x17a090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17a090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a098: 0xc05eb0c  jal         func_17AC30
    ctx->pc = 0x17A098u;
    SET_GPR_U32(ctx, 31, 0x17A0A0u);
    ctx->pc = 0x17A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A098u;
    // 0x17a09c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC30u, 0x17A098u, 0x17A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0A0u;
label_17a0a0:
    // 0x17a0a0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a0a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17a0a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a0a8: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x17a0a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x17a0ac: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A0ACu;
    {
        const bool branch_taken_0x17a0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0ACu;
        // 0x17a0b0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0ac) {
            ctx->pc = 0x17A080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a080;
        }
    }
    ctx->pc = 0x17A0B4u;
label_17a0b4:
    // 0x17a0b4: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x17a0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_17a0b8:
    // 0x17a0b8: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x17a0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x17a0bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A0BCu;
    {
        const bool branch_taken_0x17a0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a0bc) {
            ctx->pc = 0x17A0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A0BCu;
            // 0x17a0c0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A0D4u;
            goto label_17a0d4;
        }
    }
    ctx->pc = 0x17A0C4u;
    // 0x17a0c4: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17a0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x17a0c8: 0x1662ffd5  bne         $s3, $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x17A0C8u;
    {
        const bool branch_taken_0x17a0c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0C8u;
        // 0x17a0cc: 0x961018  mult        $v0, $a0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0c8) {
            ctx->pc = 0x17A020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a020;
        }
    }
    ctx->pc = 0x17A0D0u;
label_17a0d0:
    // 0x17a0d0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x17a0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17a0d4:
    // 0x17a0d4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x17a0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17a0d8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x17a0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17a0dc: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x17a0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x17a0e0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x17a0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17a0e4: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x17a0e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a0e8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x17a0e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17a0ec: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x17a0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17a0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0F0u;
        // 0x17a0f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A0F8u;
}
