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

// Function: sub_002300B8
// Address: 0x2300b8 - 0x230230
void sub_002300B8_0x2300b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002300B8_0x2300b8");
#endif

    switch (ctx->pc) {
        case 0x23012cu: goto label_23012c;
        case 0x230160u: goto label_230160;
        case 0x230174u: goto label_230174;
        case 0x230198u: goto label_230198;
        case 0x2301b4u: goto label_2301b4;
        case 0x2301c4u: goto label_2301c4;
        case 0x2301e8u: goto label_2301e8;
        case 0x230204u: goto label_230204;
        case 0x230214u: goto label_230214;
        default: break;
    }

    ctx->pc = 0x2300b8u;

    // 0x2300b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2300b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2300bc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2300bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2300c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2300c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2300c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2300c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2300c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2300c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2300cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2300ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2300d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2300d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2300d4: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2300d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2300d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2300D8u;
    {
        const bool branch_taken_0x2300d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2300DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300D8u;
        // 0x2300dc: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300d8) {
            ctx->pc = 0x2300E8u;
            goto label_2300e8;
        }
    }
    ctx->pc = 0x2300E0u;
    // 0x2300e0: 0x5462003a  bnel        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2300E0u;
    {
        const bool branch_taken_0x2300e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2300e0) {
            ctx->pc = 0x2300E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2300E0u;
            // 0x2300e4: 0x8e04036c  lw          $a0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2301CCu;
            goto label_2301cc;
        }
    }
    ctx->pc = 0x2300E8u;
label_2300e8:
    // 0x2300e8: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2300e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2300ec: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x2300ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2300f0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2300f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2300f4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2300F4u;
    {
        const bool branch_taken_0x2300f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2300F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300F4u;
        // 0x2300f8: 0x2462fffa  addiu       $v0, $v1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300f4) {
            ctx->pc = 0x23010Cu;
            goto label_23010c;
        }
    }
    ctx->pc = 0x2300FCu;
    // 0x2300fc: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x2300fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x230100: 0x5444001e  bnel        $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x230100u;
    {
        const bool branch_taken_0x230100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x230100) {
            ctx->pc = 0x230104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230100u;
            // 0x230104: 0x8e04036c  lw          $a0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23017Cu;
            goto label_23017c;
        }
    }
    ctx->pc = 0x230108u;
    // 0x230108: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x230108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_23010c:
    // 0x23010c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23010cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230110: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x230110u;
    {
        const bool branch_taken_0x230110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230110u;
        // 0x230114: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230110) {
            ctx->pc = 0x23014Cu;
            goto label_23014c;
        }
    }
    ctx->pc = 0x230118u;
    // 0x230118: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x230118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x23011c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23011Cu;
    {
        const bool branch_taken_0x23011c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23011c) {
            ctx->pc = 0x230120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23011Cu;
            // 0x230120: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230150u;
            goto label_230150;
        }
    }
    ctx->pc = 0x230124u;
    // 0x230124: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x230124u;
    SET_GPR_U32(ctx, 31, 0x23012Cu);
    ctx->pc = 0x230128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230124u;
    // 0x230128: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x230124u, 0x23012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23012Cu;
label_23012c:
    // 0x23012c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23012Cu;
    {
        const bool branch_taken_0x23012c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23012c) {
            ctx->pc = 0x230130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23012Cu;
            // 0x230130: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230150u;
            goto label_230150;
        }
    }
    ctx->pc = 0x230134u;
    // 0x230134: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x230134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x230138: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x230138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x23013c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23013Cu;
    {
        const bool branch_taken_0x23013c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23013Cu;
        // 0x230140: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23013c) {
            ctx->pc = 0x23014Cu;
            goto label_23014c;
        }
    }
    ctx->pc = 0x230144u;
    // 0x230144: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x230144u;
    {
        const bool branch_taken_0x230144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230144) {
            ctx->pc = 0x230150u;
            goto label_230150;
        }
    }
    ctx->pc = 0x23014Cu;
label_23014c:
    // 0x23014c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23014cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230150:
    // 0x230150: 0x5640000a  bnel        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x230150u;
    {
        const bool branch_taken_0x230150 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x230150) {
            ctx->pc = 0x230154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230150u;
            // 0x230154: 0x8e04036c  lw          $a0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23017Cu;
            goto label_23017c;
        }
    }
    ctx->pc = 0x230158u;
    // 0x230158: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x230158u;
    SET_GPR_U32(ctx, 31, 0x230160u);
    ctx->pc = 0x23015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230158u;
    // 0x23015c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x230158u, 0x230160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230160u;
label_230160:
    // 0x230160: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x230160u;
    {
        const bool branch_taken_0x230160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230160) {
            ctx->pc = 0x230164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230160u;
            // 0x230164: 0x8e04036c  lw          $a0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23017Cu;
            goto label_23017c;
        }
    }
    ctx->pc = 0x230168u;
    // 0x230168: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x230168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23016c: 0xc069c1c  jal         func_1A7070
    ctx->pc = 0x23016Cu;
    SET_GPR_U32(ctx, 31, 0x230174u);
    ctx->pc = 0x230170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23016Cu;
    // 0x230170: 0x240507a1  addiu       $a1, $zero, 0x7A1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7070u, 0x23016Cu, 0x230174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230174u;
label_230174:
    // 0x230174: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x230174u;
    {
        const bool branch_taken_0x230174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230174u;
        // 0x230178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230174) {
            ctx->pc = 0x230218u;
            goto label_230218;
        }
    }
    ctx->pc = 0x23017Cu;
label_23017c:
    // 0x23017c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x230180: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x230180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x230184: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x230184u;
    {
        const bool branch_taken_0x230184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230184u;
        // 0x230188: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230184) {
            ctx->pc = 0x2301A0u;
            goto label_2301a0;
        }
    }
    ctx->pc = 0x23018Cu;
    // 0x23018c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x230190: 0xc069c1c  jal         func_1A7070
    ctx->pc = 0x230190u;
    SET_GPR_U32(ctx, 31, 0x230198u);
    ctx->pc = 0x230194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230190u;
    // 0x230194: 0x240507a3  addiu       $a1, $zero, 0x7A3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1955));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7070u, 0x230190u, 0x230198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230198u;
label_230198:
    // 0x230198: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x230198u;
    {
        const bool branch_taken_0x230198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230198u;
        // 0x23019c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230198) {
            ctx->pc = 0x230218u;
            goto label_230218;
        }
    }
    ctx->pc = 0x2301A0u;
label_2301a0:
    // 0x2301a0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2301a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2301a4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2301A4u;
    {
        const bool branch_taken_0x2301a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2301A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301A4u;
        // 0x2301a8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301a4) {
            ctx->pc = 0x2301BCu;
            goto label_2301bc;
        }
    }
    ctx->pc = 0x2301ACu;
    // 0x2301ac: 0xc069c1c  jal         func_1A7070
    ctx->pc = 0x2301ACu;
    SET_GPR_U32(ctx, 31, 0x2301B4u);
    ctx->pc = 0x2301B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301ACu;
    // 0x2301b0: 0x240507a2  addiu       $a1, $zero, 0x7A2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1954));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7070u, 0x2301ACu, 0x2301B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301B4u;
label_2301b4:
    // 0x2301b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2301B4u;
    {
        const bool branch_taken_0x2301b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301B4u;
        // 0x2301b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301b4) {
            ctx->pc = 0x230218u;
            goto label_230218;
        }
    }
    ctx->pc = 0x2301BCu;
label_2301bc:
    // 0x2301bc: 0xc069c1c  jal         func_1A7070
    ctx->pc = 0x2301BCu;
    SET_GPR_U32(ctx, 31, 0x2301C4u);
    ctx->pc = 0x2301C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301BCu;
    // 0x2301c0: 0x240507a0  addiu       $a1, $zero, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7070u, 0x2301BCu, 0x2301C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301C4u;
label_2301c4:
    // 0x2301c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2301C4u;
    {
        const bool branch_taken_0x2301c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301C4u;
        // 0x2301c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301c4) {
            ctx->pc = 0x230218u;
            goto label_230218;
        }
    }
    ctx->pc = 0x2301CCu;
label_2301cc:
    // 0x2301cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2301ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2301d0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2301d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2301d4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2301D4u;
    {
        const bool branch_taken_0x2301d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2301D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301D4u;
        // 0x2301d8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301d4) {
            ctx->pc = 0x2301F0u;
            goto label_2301f0;
        }
    }
    ctx->pc = 0x2301DCu;
    // 0x2301dc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2301dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2301e0: 0xc069c1c  jal         func_1A7070
    ctx->pc = 0x2301E0u;
    SET_GPR_U32(ctx, 31, 0x2301E8u);
    ctx->pc = 0x2301E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301E0u;
    // 0x2301e4: 0x2405079f  addiu       $a1, $zero, 0x79F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1951));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7070u, 0x2301E0u, 0x2301E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301E8u;
label_2301e8:
    // 0x2301e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2301E8u;
    {
        const bool branch_taken_0x2301e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301E8u;
        // 0x2301ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301e8) {
            ctx->pc = 0x230218u;
            goto label_230218;
        }
    }
    ctx->pc = 0x2301F0u;
label_2301f0:
    // 0x2301f0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2301f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2301f4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2301F4u;
    {
        const bool branch_taken_0x2301f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2301F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301F4u;
        // 0x2301f8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301f4) {
            ctx->pc = 0x23020Cu;
            goto label_23020c;
        }
    }
    ctx->pc = 0x2301FCu;
    // 0x2301fc: 0xc069c1c  jal         func_1A7070
    ctx->pc = 0x2301FCu;
    SET_GPR_U32(ctx, 31, 0x230204u);
    ctx->pc = 0x230200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301FCu;
    // 0x230200: 0x2405079e  addiu       $a1, $zero, 0x79E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1950));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7070u, 0x2301FCu, 0x230204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230204u;
label_230204:
    // 0x230204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230204u;
    {
        const bool branch_taken_0x230204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230204u;
        // 0x230208: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230204) {
            ctx->pc = 0x230218u;
            goto label_230218;
        }
    }
    ctx->pc = 0x23020Cu;
label_23020c:
    // 0x23020c: 0xc069c1c  jal         func_1A7070
    ctx->pc = 0x23020Cu;
    SET_GPR_U32(ctx, 31, 0x230214u);
    ctx->pc = 0x230210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23020Cu;
    // 0x230210: 0x2405079d  addiu       $a1, $zero, 0x79D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1949));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7070u, 0x23020Cu, 0x230214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230214u;
label_230214:
    // 0x230214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230218:
    // 0x230218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23021c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23021cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230220: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230224: 0x3e00008  jr          $ra
    ctx->pc = 0x230224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230224u;
        // 0x230228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23022Cu;
    // 0x23022c: 0x0  nop
    ctx->pc = 0x23022cu;
    // NOP
    ctx->pc = 0x230230u;
}
