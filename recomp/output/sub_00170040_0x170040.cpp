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

// Function: sub_00170040
// Address: 0x170040 - 0x170158
void sub_00170040_0x170040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170040_0x170040");
#endif

    switch (ctx->pc) {
        case 0x1700bcu: goto label_1700bc;
        case 0x1700ecu: goto label_1700ec;
        case 0x170108u: goto label_170108;
        case 0x170120u: goto label_170120;
        case 0x170130u: goto label_170130;
        default: break;
    }

    ctx->pc = 0x170040u;

    // 0x170040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170044: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x170044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x170048: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17004c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170050: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x170050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170058: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x170058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17005c: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x17005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x170060: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x170060u;
    {
        const bool branch_taken_0x170060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170060u;
        // 0x170064: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170060) {
            ctx->pc = 0x17008Cu;
            goto label_17008c;
        }
    }
    ctx->pc = 0x170068u;
    // 0x170068: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170068u;
    {
        const bool branch_taken_0x170068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170068u;
        // 0x17006c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170068) {
            ctx->pc = 0x170078u;
            goto label_170078;
        }
    }
    ctx->pc = 0x170070u;
    // 0x170070: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x170070u;
    {
        const bool branch_taken_0x170070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170070u;
        // 0x170074: 0x8e420278  lw          $v0, 0x278($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170070) {
            ctx->pc = 0x17013Cu;
            goto label_17013c;
        }
    }
    ctx->pc = 0x170078u;
label_170078:
    // 0x170078: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170078u;
    {
        const bool branch_taken_0x170078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170078) {
            ctx->pc = 0x17007Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170078u;
            // 0x17007c: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170094u;
            goto label_170094;
        }
    }
    ctx->pc = 0x170080u;
    // 0x170080: 0x8e420288  lw          $v0, 0x288($s2)
    ctx->pc = 0x170080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
    // 0x170084: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x170084u;
    {
        const bool branch_taken_0x170084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170084) {
            ctx->pc = 0x170088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170084u;
            // 0x170088: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170094u;
            goto label_170094;
        }
    }
    ctx->pc = 0x17008Cu;
label_17008c:
    // 0x17008c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x17008Cu;
    {
        const bool branch_taken_0x17008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17008Cu;
        // 0x170090: 0x8e420270  lw          $v0, 0x270($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17008c) {
            ctx->pc = 0x17013Cu;
            goto label_17013c;
        }
    }
    ctx->pc = 0x170094u;
label_170094:
    // 0x170094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x170094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x170098: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170098u;
    {
        const bool branch_taken_0x170098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170098u;
        // 0x17009c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170098) {
            ctx->pc = 0x1700A8u;
            goto label_1700a8;
        }
    }
    ctx->pc = 0x1700A0u;
    // 0x1700a0: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1700A0u;
    {
        const bool branch_taken_0x1700a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1700A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700A0u;
        // 0x1700a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700a0) {
            ctx->pc = 0x17013Cu;
            goto label_17013c;
        }
    }
    ctx->pc = 0x1700A8u;
label_1700a8:
    // 0x1700a8: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1700a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1700ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1700ACu;
    {
        const bool branch_taken_0x1700ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1700B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700ACu;
        // 0x1700b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700ac) {
            ctx->pc = 0x1700C4u;
            goto label_1700c4;
        }
    }
    ctx->pc = 0x1700B4u;
    // 0x1700b4: 0xc05d08c  jal         func_174230
    ctx->pc = 0x1700B4u;
    SET_GPR_U32(ctx, 31, 0x1700BCu);
    ctx->pc = 0x1700B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700B4u;
    // 0x1700b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174230u, 0x1700B4u, 0x1700BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700BCu;
label_1700bc:
    // 0x1700bc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1700BCu;
    {
        const bool branch_taken_0x1700bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1700C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700BCu;
        // 0x1700c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700bc) {
            ctx->pc = 0x170140u;
            goto label_170140;
        }
    }
    ctx->pc = 0x1700C4u;
label_1700c4:
    // 0x1700c4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1700C4u;
    {
        const bool branch_taken_0x1700c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1700c4) {
            ctx->pc = 0x1700C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1700C4u;
            // 0x1700c8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1700E0u;
            goto label_1700e0;
        }
    }
    ctx->pc = 0x1700CCu;
    // 0x1700cc: 0x8e4202bc  lw          $v0, 0x2BC($s2)
    ctx->pc = 0x1700ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x1700d0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1700D0u;
    {
        const bool branch_taken_0x1700d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1700d0) {
            ctx->pc = 0x1700D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1700D0u;
            // 0x1700d4: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1700E0u;
            goto label_1700e0;
        }
    }
    ctx->pc = 0x1700D8u;
    // 0x1700d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1700D8u;
    {
        const bool branch_taken_0x1700d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1700DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700D8u;
        // 0x1700dc: 0xae4002bc  sw          $zero, 0x2BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700d8) {
            ctx->pc = 0x170138u;
            goto label_170138;
        }
    }
    ctx->pc = 0x1700E0u;
label_1700e0:
    // 0x1700e0: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x1700e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1700e4: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1700E4u;
    SET_GPR_U32(ctx, 31, 0x1700ECu);
    ctx->pc = 0x1700E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700E4u;
    // 0x1700e8: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1700E4u, 0x1700ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700ECu;
label_1700ec:
    // 0x1700ec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1700ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1700f0: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x1700f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x1700f4: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1700f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1700f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1700f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1700fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170100: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x170100u;
    SET_GPR_U32(ctx, 31, 0x170108u);
    ctx->pc = 0x170104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170100u;
    // 0x170104: 0x24e78738  addiu       $a3, $a3, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x170100u, 0x170108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170108u;
label_170108:
    // 0x170108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x170108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17010c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x17010Cu;
    {
        const bool branch_taken_0x17010c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x170110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17010Cu;
        // 0x170110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17010c) {
            ctx->pc = 0x170138u;
            goto label_170138;
        }
    }
    ctx->pc = 0x170114u;
    // 0x170114: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x170114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x170118: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x170118u;
    SET_GPR_U32(ctx, 31, 0x170120u);
    ctx->pc = 0x17011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170118u;
    // 0x17011c: 0xae500228  sw          $s0, 0x228($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x170118u, 0x170120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170120u;
label_170120:
    // 0x170120: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x170120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x170124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170128: 0xc042128  jal         func_1084A0
    ctx->pc = 0x170128u;
    SET_GPR_U32(ctx, 31, 0x170130u);
    ctx->pc = 0x17012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170128u;
    // 0x17012c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x170128u, 0x170130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170130u;
label_170130:
    // 0x170130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170130u;
    {
        const bool branch_taken_0x170130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170130u;
        // 0x170134: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170130) {
            ctx->pc = 0x17013Cu;
            goto label_17013c;
        }
    }
    ctx->pc = 0x170138u;
label_170138:
    // 0x170138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17013c:
    // 0x17013c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17013cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170140:
    // 0x170140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170144: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170148: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x170148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17014c: 0x3e00008  jr          $ra
    ctx->pc = 0x17014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17014Cu;
        // 0x170150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17014Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170154u;
    // 0x170154: 0x0  nop
    ctx->pc = 0x170154u;
    // NOP
    ctx->pc = 0x170158u;
}
