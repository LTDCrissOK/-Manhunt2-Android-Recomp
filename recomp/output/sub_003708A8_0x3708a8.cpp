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

// Function: sub_003708A8
// Address: 0x3708a8 - 0x370a48
void sub_003708A8_0x3708a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003708A8_0x3708a8");
#endif

    switch (ctx->pc) {
        case 0x370928u: goto label_370928;
        case 0x370948u: goto label_370948;
        case 0x37095cu: goto label_37095c;
        case 0x370980u: goto label_370980;
        case 0x3709a8u: goto label_3709a8;
        case 0x3709f0u: goto label_3709f0;
        case 0x370a1cu: goto label_370a1c;
        default: break;
    }

    ctx->pc = 0x3708a8u;

    // 0x3708a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3708a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3708ac: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x3708acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x3708b0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3708b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3708b4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3708b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3708b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3708b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3708bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3708bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3708c0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x3708c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x3708c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3708c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3708c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3708c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3708cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3708ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3708d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3708d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3708d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3708d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3708d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3708d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3708dc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3708dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3708e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3708e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3708e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3708e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3708e8: 0x1262004c  beq         $s3, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3708E8u;
    {
        const bool branch_taken_0x3708e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3708ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708E8u;
        // 0x3708ec: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708e8) {
            ctx->pc = 0x370A1Cu;
            goto label_370a1c;
        }
    }
    ctx->pc = 0x3708F0u;
    // 0x3708f0: 0x1260004a  beqz        $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x3708F0u;
    {
        const bool branch_taken_0x3708f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3708F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708F0u;
        // 0x3708f4: 0xac930000  sw          $s3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708f0) {
            ctx->pc = 0x370A1Cu;
            goto label_370a1c;
        }
    }
    ctx->pc = 0x3708F8u;
    // 0x3708f8: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x3708f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x3708fc: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x3708fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x370900: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x370900u;
    {
        const bool branch_taken_0x370900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370900u;
        // 0x370904: 0x8e66004c  lw          $a2, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370900) {
            ctx->pc = 0x370964u;
            goto label_370964;
        }
    }
    ctx->pc = 0x370908u;
    // 0x370908: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x370908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x37090c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x37090Cu;
    {
        const bool branch_taken_0x37090c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x370910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37090Cu;
        // 0x370910: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37090c) {
            ctx->pc = 0x370968u;
            goto label_370968;
        }
    }
    ctx->pc = 0x370914u;
    // 0x370914: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x370914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x370918: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x370918u;
    {
        const bool branch_taken_0x370918 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x37091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370918u;
        // 0x37091c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370918) {
            ctx->pc = 0x370968u;
            goto label_370968;
        }
    }
    ctx->pc = 0x370920u;
    // 0x370920: 0xc0dcc22  jal         func_373088
    ctx->pc = 0x370920u;
    SET_GPR_U32(ctx, 31, 0x370928u);
    ctx->pc = 0x373088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373088u, 0x370920u, 0x370928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370928u;
label_370928:
    // 0x370928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x370928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37092c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37092cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370930: 0x252c0  sll         $t2, $v0, 11
    ctx->pc = 0x370930u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x370934: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x370934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x370938: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x370938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37093c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x37093cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x370940: 0xc0dd4a4  jal         func_375290
    ctx->pc = 0x370940u;
    SET_GPR_U32(ctx, 31, 0x370948u);
    ctx->pc = 0x370944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370940u;
    // 0x370944: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375290u, 0x370940u, 0x370948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370948u;
label_370948:
    // 0x370948: 0x3405dead  ori         $a1, $zero, 0xDEAD
    ctx->pc = 0x370948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57005);
    // 0x37094c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x37094cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x370950: 0x34a5beef  ori         $a1, $a1, 0xBEEF
    ctx->pc = 0x370950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48879);
    // 0x370954: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x370954u;
    SET_GPR_U32(ctx, 31, 0x37095Cu);
    ctx->pc = 0x370958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370954u;
    // 0x370958: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x370954u, 0x37095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37095Cu;
label_37095c:
    // 0x37095c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x37095Cu;
    {
        const bool branch_taken_0x37095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37095Cu;
        // 0x370960: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37095c) {
            ctx->pc = 0x370A20u;
            goto label_370a20;
        }
    }
    ctx->pc = 0x370964u;
label_370964:
    // 0x370964: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x370964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_370968:
    // 0x370968: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x370968u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37096c: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x37096cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x370970: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x370970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x370974: 0x9271005c  lbu         $s1, 0x5C($s3)
    ctx->pc = 0x370974u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x370978: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x370978u;
    {
        const bool branch_taken_0x370978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370978u;
        // 0x37097c: 0x8e770060  lw          $s7, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370978) {
            ctx->pc = 0x370998u;
            goto label_370998;
        }
    }
    ctx->pc = 0x370980u;
label_370980:
    // 0x370980: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x370980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x370984: 0x0  nop
    ctx->pc = 0x370984u;
    // NOP
    // 0x370988: 0x0  nop
    ctx->pc = 0x370988u;
    // NOP
    // 0x37098c: 0x0  nop
    ctx->pc = 0x37098cu;
    // NOP
    // 0x370990: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x370990u;
    {
        const bool branch_taken_0x370990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370990u;
        // 0x370994: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370990) {
            ctx->pc = 0x370980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370980;
        }
    }
    ctx->pc = 0x370998u;
label_370998:
    // 0x370998: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x370998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x37099c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37099Cu;
    {
        const bool branch_taken_0x37099c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3709A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37099Cu;
        // 0x3709a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37099c) {
            ctx->pc = 0x3709C0u;
            goto label_3709c0;
        }
    }
    ctx->pc = 0x3709A4u;
    // 0x3709a4: 0x0  nop
    ctx->pc = 0x3709a4u;
    // NOP
label_3709a8:
    // 0x3709a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3709a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3709ac: 0x0  nop
    ctx->pc = 0x3709acu;
    // NOP
    // 0x3709b0: 0x0  nop
    ctx->pc = 0x3709b0u;
    // NOP
    // 0x3709b4: 0x0  nop
    ctx->pc = 0x3709b4u;
    // NOP
    // 0x3709b8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3709B8u;
    {
        const bool branch_taken_0x3709b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3709BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709B8u;
        // 0x3709bc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709b8) {
            ctx->pc = 0x3709A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3709a8;
        }
    }
    ctx->pc = 0x3709C0u;
label_3709c0:
    // 0x3709c0: 0x38840008  xori        $a0, $a0, 0x8
    ctx->pc = 0x3709c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)8);
    // 0x3709c4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3709c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3709c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3709c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3709cc: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x3709ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3709d0: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x3709d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3709d4: 0x44800a  movz        $s0, $v0, $a0
    ctx->pc = 0x3709d4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x3709d8: 0x64380b  movn        $a3, $v1, $a0
    ctx->pc = 0x3709d8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3709dc: 0x2e520001  sltiu       $s2, $s2, 0x1
    ctx->pc = 0x3709dcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3709e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3709e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3709e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709e8: 0xc0dd4e8  jal         func_3753A0
    ctx->pc = 0x3709E8u;
    SET_GPR_U32(ctx, 31, 0x3709F0u);
    ctx->pc = 0x3709ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709E8u;
    // 0x3709ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3753A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3753A0u, 0x3709E8u, 0x3709F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709F0u;
label_3709f0:
    // 0x3709f0: 0x9262005d  lbu         $v0, 0x5D($s3)
    ctx->pc = 0x3709f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 93)));
    // 0x3709f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3709f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3709f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709fc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3709fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x370a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x370a04: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x370a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a08: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x370a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a0c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x370a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a10: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x370a10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a14: 0xc0dd2de  jal         func_374B78
    ctx->pc = 0x370A14u;
    SET_GPR_U32(ctx, 31, 0x370A1Cu);
    ctx->pc = 0x370A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A14u;
    // 0x370a18: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B78u, 0x370A14u, 0x370A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A1Cu;
label_370a1c:
    // 0x370a1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x370a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_370a20:
    // 0x370a20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x370a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x370a24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x370a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370a28: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x370a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x370a2c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x370a2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370a30: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x370a30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a34: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x370a34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370a38: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x370a38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370a3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x370a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x370a40: 0x3e00008  jr          $ra
    ctx->pc = 0x370A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A40u;
        // 0x370a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370A48u;
}
