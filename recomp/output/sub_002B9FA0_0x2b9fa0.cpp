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

// Function: sub_002B9FA0
// Address: 0x2b9fa0 - 0x2ba190
void sub_002B9FA0_0x2b9fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9FA0_0x2b9fa0");
#endif

    switch (ctx->pc) {
        case 0x2b9fdcu: goto label_2b9fdc;
        case 0x2ba024u: goto label_2ba024;
        case 0x2ba050u: goto label_2ba050;
        case 0x2ba094u: goto label_2ba094;
        case 0x2ba0b8u: goto label_2ba0b8;
        case 0x2ba0d0u: goto label_2ba0d0;
        default: break;
    }

    ctx->pc = 0x2b9fa0u;

    // 0x2b9fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9fa4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2b9fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2b9fa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b9fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b9fac: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2b9facu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2b9fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9fb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b9fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b9fbc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b9fc0: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9FC0u;
    {
        const bool branch_taken_0x2b9fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FC0u;
        // 0x2b9fc4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fc0) {
            ctx->pc = 0x2B9FD4u;
            goto label_2b9fd4;
        }
    }
    ctx->pc = 0x2B9FC8u;
    // 0x2b9fc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9fcc: 0x14a2006a  bne         $a1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2B9FCCu;
    {
        const bool branch_taken_0x2b9fcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FCCu;
        // 0x2b9fd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fcc) {
            ctx->pc = 0x2BA178u;
            goto label_2ba178;
        }
    }
    ctx->pc = 0x2B9FD4u;
label_2b9fd4:
    // 0x2b9fd4: 0xc0a21c2  jal         func_288708
    ctx->pc = 0x2B9FD4u;
    SET_GPR_U32(ctx, 31, 0x2B9FDCu);
    ctx->pc = 0x288708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288708u, 0x2B9FD4u, 0x2B9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9FDCu;
label_2b9fdc:
    // 0x2b9fdc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2B9FDCu;
    {
        const bool branch_taken_0x2b9fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FDCu;
        // 0x2b9fe0: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fdc) {
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2B9FE4u;
    // 0x2b9fe4: 0x8cc5ad98  lw          $a1, -0x5268($a2)
    ctx->pc = 0x2b9fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946200)));
    // 0x2b9fe8: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B9FE8u;
    {
        const bool branch_taken_0x2b9fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FE8u;
        // 0x2b9fec: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fe8) {
            ctx->pc = 0x2BA050u;
            goto label_2ba050;
        }
    }
    ctx->pc = 0x2B9FF0u;
    // 0x2b9ff0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b9ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9ff4: 0x8c822b40  lw          $v0, 0x2B40($a0)
    ctx->pc = 0x2b9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11072)));
    // 0x2b9ff8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2b9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b9ffc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b9ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ba000: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2ba000u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2ba004: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA004u;
    {
        const bool branch_taken_0x2ba004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA004u;
        // 0x2ba008: 0xacc2ad98  sw          $v0, -0x5268($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294946200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba004) {
            ctx->pc = 0x2BA02Cu;
            goto label_2ba02c;
        }
    }
    ctx->pc = 0x2BA00Cu;
    // 0x2ba00c: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x2ba00cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x2ba010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba014: 0x24c64e80  addiu       $a2, $a2, 0x4E80
    ctx->pc = 0x2ba014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20096));
    // 0x2ba018: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x2ba018u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x574E81u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x574E81u, _value); } while (0);
    // 0x2ba01c: 0xc0ee740  jal         func_3B9D00
    ctx->pc = 0x2BA01Cu;
    SET_GPR_U32(ctx, 31, 0x2BA024u);
    ctx->pc = 0x2BA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA01Cu;
    // 0x2ba020: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D00u, 0x2BA01Cu, 0x2BA024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA024u;
label_2ba024:
    // 0x2ba024: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BA024u;
    {
        const bool branch_taken_0x2ba024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA024u;
        // 0x2ba028: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba024) {
            ctx->pc = 0x2BA054u;
            goto label_2ba054;
        }
    }
    ctx->pc = 0x2BA02Cu;
label_2ba02c:
    // 0x2ba02c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ba030: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2ba030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2ba034: 0x9044ada0  lbu         $a0, -0x5260($v0)
    ctx->pc = 0x2ba034u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3FADA0u));
    // 0x2ba038: 0x24634e80  addiu       $v1, $v1, 0x4E80
    ctx->pc = 0x2ba038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x2ba03c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2ba03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba044: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2ba044u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x574E81u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x574E81u, _value); } while (0);
    // 0x2ba048: 0xc0ee740  jal         func_3B9D00
    ctx->pc = 0x2BA048u;
    SET_GPR_U32(ctx, 31, 0x2BA050u);
    ctx->pc = 0x2BA04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA048u;
    // 0x2ba04c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D00u, 0x2BA048u, 0x2BA050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA050u;
label_2ba050:
    // 0x2ba050: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ba050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_2ba054:
    // 0x2ba054: 0x8cc5ad9c  lw          $a1, -0x5264($a2)
    ctx->pc = 0x2ba054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946204)));
    // 0x2ba058: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BA058u;
    {
        const bool branch_taken_0x2ba058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA058u;
        // 0x2ba05c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba058) {
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2BA060u;
    // 0x2ba060: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ba060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ba064: 0x8c822b40  lw          $v0, 0x2B40($a0)
    ctx->pc = 0x2ba064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11072)));
    // 0x2ba068: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2ba068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ba06c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2ba06cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ba070: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2ba070u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2ba074: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA074u;
    {
        const bool branch_taken_0x2ba074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA074u;
        // 0x2ba078: 0xacc2ad9c  sw          $v0, -0x5264($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294946204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba074) {
            ctx->pc = 0x2BA09Cu;
            goto label_2ba09c;
        }
    }
    ctx->pc = 0x2BA07Cu;
    // 0x2ba07c: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x2ba07cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x2ba080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba084: 0xa0c04e80  sb          $zero, 0x4E80($a2)
    ctx->pc = 0x2ba084u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x574E80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x574E80u, _value); } while (0);
    // 0x2ba088: 0x24c64e80  addiu       $a2, $a2, 0x4E80
    ctx->pc = 0x2ba088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20096));
    // 0x2ba08c: 0xc0ee740  jal         func_3B9D00
    ctx->pc = 0x2BA08Cu;
    SET_GPR_U32(ctx, 31, 0x2BA094u);
    ctx->pc = 0x2BA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA08Cu;
    // 0x2ba090: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D00u, 0x2BA08Cu, 0x2BA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA094u;
label_2ba094:
    // 0x2ba094: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA094u;
    {
        const bool branch_taken_0x2ba094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA094u;
        // 0x2ba098: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba094) {
            ctx->pc = 0x2BA0BCu;
            goto label_2ba0bc;
        }
    }
    ctx->pc = 0x2BA09Cu;
label_2ba09c:
    // 0x2ba09c: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x2ba09cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x2ba0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba0a4: 0xa0c24e80  sb          $v0, 0x4E80($a2)
    ctx->pc = 0x2ba0a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x574E80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x574E80u, _value); } while (0);
    // 0x2ba0a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba0ac: 0x24c64e80  addiu       $a2, $a2, 0x4E80
    ctx->pc = 0x2ba0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20096));
    // 0x2ba0b0: 0xc0ee740  jal         func_3B9D00
    ctx->pc = 0x2BA0B0u;
    SET_GPR_U32(ctx, 31, 0x2BA0B8u);
    ctx->pc = 0x2BA0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0B0u;
    // 0x2ba0b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D00u, 0x2BA0B0u, 0x2BA0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0B8u;
label_2ba0b8:
    // 0x2ba0b8: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2ba0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_2ba0bc:
    // 0x2ba0bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba0c0: 0x26124d60  addiu       $s2, $s0, 0x4D60
    ctx->pc = 0x2ba0c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 19808));
    // 0x2ba0c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba0c8: 0xc0ee5f8  jal         func_3B97E0
    ctx->pc = 0x2BA0C8u;
    SET_GPR_U32(ctx, 31, 0x2BA0D0u);
    ctx->pc = 0x2BA0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0C8u;
    // 0x2ba0cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B97E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B97E0u, 0x2BA0C8u, 0x2BA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0D0u;
label_2ba0d0:
    // 0x2ba0d0: 0x92034d60  lbu         $v1, 0x4D60($s0)
    ctx->pc = 0x2ba0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19808)));
    // 0x2ba0d4: 0x54600028  bnel        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BA0D4u;
    {
        const bool branch_taken_0x2ba0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba0d4) {
            ctx->pc = 0x2BA0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA0D4u;
            // 0x2ba0d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA178u;
            goto label_2ba178;
        }
    }
    ctx->pc = 0x2BA0DCu;
    // 0x2ba0dc: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x2ba0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2ba0e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2ba0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2ba0e4: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x2ba0e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2ba0e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ba0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ba0ec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2ba0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ba0f0: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x2ba0f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2ba0f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ba0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ba0f8: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ba0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x2ba0fc: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x2ba0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2ba100: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA100u;
    {
        const bool branch_taken_0x2ba100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA100u;
        // 0x2ba104: 0xac824d5c  sw          $v0, 0x4D5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 19804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba100) {
            ctx->pc = 0x2BA11Cu;
            goto label_2ba11c;
        }
    }
    ctx->pc = 0x2BA108u;
    // 0x2ba108: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2ba108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ba10c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BA10Cu;
    {
        const bool branch_taken_0x2ba10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA10Cu;
        // 0x2ba110: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba10c) {
            ctx->pc = 0x2BA158u;
            goto label_2ba158;
        }
    }
    ctx->pc = 0x2BA114u;
    // 0x2ba114: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2BA114u;
    {
        const bool branch_taken_0x2ba114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA114u;
        // 0x2ba118: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba114) {
            ctx->pc = 0x2BA174u;
            goto label_2ba174;
        }
    }
    ctx->pc = 0x2BA11Cu;
label_2ba11c:
    // 0x2ba11c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ba11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba120: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA120u;
    {
        const bool branch_taken_0x2ba120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba120) {
            ctx->pc = 0x2BA124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA120u;
            // 0x2ba124: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA134u;
            goto label_2ba134;
        }
    }
    ctx->pc = 0x2BA128u;
    // 0x2ba128: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ba128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ba12c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ba12cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2ba130: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ba130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ba134:
    // 0x2ba134: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ba134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ba138: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ba138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ba13c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ba13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ba140: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BA140u;
    {
        const bool branch_taken_0x2ba140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA140u;
        // 0x2ba144: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba140) {
            ctx->pc = 0x2BA174u;
            goto label_2ba174;
        }
    }
    ctx->pc = 0x2BA148u;
    // 0x2ba148: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2ba148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ba14c: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x2ba14cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ba150: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA150u;
    {
        const bool branch_taken_0x2ba150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA150u;
        // 0x2ba154: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba150) {
            ctx->pc = 0x2BA174u;
            goto label_2ba174;
        }
    }
    ctx->pc = 0x2BA158u;
label_2ba158:
    // 0x2ba158: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x2ba158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2ba15c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ba15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ba160: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA160u;
    {
        const bool branch_taken_0x2ba160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA160u;
        // 0x2ba164: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba160) {
            ctx->pc = 0x2BA170u;
            goto label_2ba170;
        }
    }
    ctx->pc = 0x2BA168u;
    // 0x2ba168: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA168u;
    {
        const bool branch_taken_0x2ba168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA168u;
        // 0x2ba16c: 0xae250010  sw          $a1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba168) {
            ctx->pc = 0x2BA174u;
            goto label_2ba174;
        }
    }
    ctx->pc = 0x2BA170u;
label_2ba170:
    // 0x2ba170: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ba170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2ba174:
    // 0x2ba174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba178:
    // 0x2ba178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ba178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba17c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ba17cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba180: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ba180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba184: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA184u;
        // 0x2ba188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA18Cu;
    // 0x2ba18c: 0x0  nop
    ctx->pc = 0x2ba18cu;
    // NOP
    ctx->pc = 0x2ba190u;
}
