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

// Function: sub_003D53A0
// Address: 0x3d53a0 - 0x3d56d0
void sub_003D53A0_0x3d53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D53A0_0x3d53a0");
#endif

    switch (ctx->pc) {
        case 0x3d5408u: goto label_3d5408;
        case 0x3d544cu: goto label_3d544c;
        case 0x3d5474u: goto label_3d5474;
        case 0x3d5488u: goto label_3d5488;
        case 0x3d54b0u: goto label_3d54b0;
        case 0x3d5528u: goto label_3d5528;
        case 0x3d554cu: goto label_3d554c;
        case 0x3d557cu: goto label_3d557c;
        case 0x3d558cu: goto label_3d558c;
        case 0x3d55b4u: goto label_3d55b4;
        case 0x3d5608u: goto label_3d5608;
        case 0x3d5618u: goto label_3d5618;
        case 0x3d5630u: goto label_3d5630;
        case 0x3d5650u: goto label_3d5650;
        case 0x3d566cu: goto label_3d566c;
        default: break;
    }

    ctx->pc = 0x3d53a0u;

    // 0x3d53a0: 0x27bdf960  addiu       $sp, $sp, -0x6A0
    ctx->pc = 0x3d53a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965600));
    // 0x3d53a4: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x3d53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
    // 0x3d53a8: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x3d53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
    // 0x3d53ac: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3d53acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d53b0: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x3d53b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
    // 0x3d53b4: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x3d53b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
    // 0x3d53b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3d53b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d53bc: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x3d53bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
    // 0x3d53c0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3d53c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d53c4: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x3d53c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
    // 0x3d53c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d53c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d53cc: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x3d53ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
    // 0x3d53d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d53d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d53d4: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x3d53d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
    // 0x3d53d8: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x3d53d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
    // 0x3d53dc: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x3d53dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
    // 0x3d53e0: 0xafa705e4  sw          $a3, 0x5E4($sp)
    ctx->pc = 0x3d53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 7));
    // 0x3d53e4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3d53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d53e8: 0x8e770008  lw          $s7, 0x8($s3)
    ctx->pc = 0x3d53e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3d53ec: 0xafb005e8  sw          $s0, 0x5E8($sp)
    ctx->pc = 0x3d53ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 16));
    // 0x3d53f0: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x3d53f0u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d53f4: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x3d53f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d53f8: 0xafa005f4  sw          $zero, 0x5F4($sp)
    ctx->pc = 0x3d53f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
    // 0x3d53fc: 0xafa005f8  sw          $zero, 0x5F8($sp)
    ctx->pc = 0x3d53fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 0));
    // 0x3d5400: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3D5400u;
    {
        const bool branch_taken_0x3d5400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5400u;
        // 0x3d5404: 0xafa005e0  sw          $zero, 0x5E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5400) {
            ctx->pc = 0x3D5538u;
            goto label_3d5538;
        }
    }
    ctx->pc = 0x3D5408u;
label_3d5408:
    // 0x3d5408: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3d5408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d540c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D540Cu;
    {
        const bool branch_taken_0x3d540c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d540c) {
            ctx->pc = 0x3D5410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D540Cu;
            // 0x3d5410: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D541Cu;
            goto label_3d541c;
        }
    }
    ctx->pc = 0x3D5414u;
    // 0x3d5414: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D5414u;
    {
        const bool branch_taken_0x3d5414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5414u;
        // 0x3d5418: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5414) {
            ctx->pc = 0x3D542Cu;
            goto label_3d542c;
        }
    }
    ctx->pc = 0x3D541Cu;
label_3d541c:
    // 0x3d541c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3d5420: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3d5420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3d5424: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x3d5424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3d5428: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3d5428u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3d542c:
    // 0x3d542c: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x3D542Cu;
    {
        const bool branch_taken_0x3d542c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D542Cu;
        // 0x3d5430: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d542c) {
            ctx->pc = 0x3D5458u;
            goto label_3d5458;
        }
    }
    ctx->pc = 0x3D5434u;
    // 0x3d5434: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x3d5434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3d5438: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3d5438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d543c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3d543cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5440: 0x27a805e0  addiu       $t0, $sp, 0x5E0
    ctx->pc = 0x3d5440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    // 0x3d5444: 0xc0f542e  jal         func_3D50B8
    ctx->pc = 0x3D5444u;
    SET_GPR_U32(ctx, 31, 0x3D544Cu);
    ctx->pc = 0x3D5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5444u;
    // 0x3d5448: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D50B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D50B8u, 0x3D5444u, 0x3D544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D544Cu;
label_3d544c:
    // 0x3d544c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d544cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5450: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3D5450u;
    {
        const bool branch_taken_0x3d5450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5450u;
        // 0x3d5454: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5450) {
            ctx->pc = 0x3D548Cu;
            goto label_3d548c;
        }
    }
    ctx->pc = 0x3D5458u;
label_3d5458:
    // 0x3d5458: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5458u;
    {
        const bool branch_taken_0x3d5458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5458u;
        // 0x3d545c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5458) {
            ctx->pc = 0x3D547Cu;
            goto label_3d547c;
        }
    }
    ctx->pc = 0x3D5460u;
    // 0x3d5460: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3d5460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d5464: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3d5464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d5468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d546c: 0xc0f542e  jal         func_3D50B8
    ctx->pc = 0x3D546Cu;
    SET_GPR_U32(ctx, 31, 0x3D5474u);
    ctx->pc = 0x3D5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D546Cu;
    // 0x3d5470: 0x27a805e0  addiu       $t0, $sp, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D50B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D50B8u, 0x3D546Cu, 0x3D5474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5474u;
label_3d5474:
    // 0x3d5474: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D5474u;
    {
        const bool branch_taken_0x3d5474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5474u;
        // 0x3d5478: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5474) {
            ctx->pc = 0x3D548Cu;
            goto label_3d548c;
        }
    }
    ctx->pc = 0x3D547Cu;
label_3d547c:
    // 0x3d547c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3d547cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d5480: 0xc0f53f8  jal         func_3D4FE0
    ctx->pc = 0x3D5480u;
    SET_GPR_U32(ctx, 31, 0x3D5488u);
    ctx->pc = 0x3D5484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5480u;
    // 0x3d5484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4FE0u, 0x3D5480u, 0x3D5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5488u;
label_3d5488:
    // 0x3d5488: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d5488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d548c:
    // 0x3d548c: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D548Cu;
    {
        const bool branch_taken_0x3d548c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D548Cu;
        // 0x3d5490: 0x8fa205e0  lw          $v0, 0x5E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d548c) {
            ctx->pc = 0x3D5518u;
            goto label_3d5518;
        }
    }
    ctx->pc = 0x3D5494u;
    // 0x3d5494: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3D5494u;
    {
        const bool branch_taken_0x3d5494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5494u;
        // 0x3d5498: 0x8fa205f8  lw          $v0, 0x5F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5494) {
            ctx->pc = 0x3D5510u;
            goto label_3d5510;
        }
    }
    ctx->pc = 0x3D549Cu;
    // 0x3d549c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3D549Cu;
    {
        const bool branch_taken_0x3d549c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d549c) {
            ctx->pc = 0x3D54A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D549Cu;
            // 0x3d54a0: 0x9624029a  lhu         $a0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D551Cu;
            goto label_3d551c;
        }
    }
    ctx->pc = 0x3D54A4u;
    // 0x3d54a4: 0x27a302f0  addiu       $v1, $sp, 0x2F0
    ctx->pc = 0x3d54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x3d54a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d54a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d54ac: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x3d54acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_3d54b0:
    // 0x3d54b0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x3d54b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d54b4: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x3d54b4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3d54b8: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x3d54b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3d54bc: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x3d54bcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3d54c0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x3d54c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x3d54c4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x3d54c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x3d54c8: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x3d54c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x3d54cc: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x3d54ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x3d54d0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3d54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3d54d4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d54d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d54d8: 0x0  nop
    ctx->pc = 0x3d54d8u;
    // NOP
    // 0x3d54dc: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D54DCu;
    {
        const bool branch_taken_0x3d54dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3d54dc) {
            ctx->pc = 0x3D54B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d54b0;
        }
    }
    ctx->pc = 0x3D54E4u;
    // 0x3d54e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d54e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d54ec: 0xafb005f0  sw          $s0, 0x5F0($sp)
    ctx->pc = 0x3d54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1520), GPR_U32(ctx, 16));
    // 0x3d54f0: 0xafb505ec  sw          $s5, 0x5EC($sp)
    ctx->pc = 0x3d54f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 21));
    // 0x3d54f4: 0xafa405f8  sw          $a0, 0x5F8($sp)
    ctx->pc = 0x3d54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 4));
    // 0x3d54f8: 0xafa505f4  sw          $a1, 0x5F4($sp)
    ctx->pc = 0x3d54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 5));
    // 0x3d54fc: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x3d54fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5500: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x3d5500u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3d5504: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x3d5504u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x3d5508: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5508u;
    {
        const bool branch_taken_0x3d5508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5508u;
        // 0x3d550c: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5508) {
            ctx->pc = 0x3D5518u;
            goto label_3d5518;
        }
    }
    ctx->pc = 0x3D5510u;
label_3d5510:
    // 0x3d5510: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3D5510u;
    {
        const bool branch_taken_0x3d5510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5510u;
        // 0x3d5514: 0xafa005f4  sw          $zero, 0x5F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5510) {
            ctx->pc = 0x3D5558u;
            goto label_3d5558;
        }
    }
    ctx->pc = 0x3D5518u;
label_3d5518:
    // 0x3d5518: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x3d5518u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_3d551c:
    // 0x3d551c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d551cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5520: 0xc0f5480  jal         func_3D5200
    ctx->pc = 0x3D5520u;
    SET_GPR_U32(ctx, 31, 0x3D5528u);
    ctx->pc = 0x3D5524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5520u;
    // 0x3d5524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5200u, 0x3D5520u, 0x3D5528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5528u;
label_3d5528:
    // 0x3d5528: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3d5528u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d552c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d552cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d5530: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d5530u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d5534: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x3d5534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3d5538:
    // 0x3d5538: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3d5538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d553c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d553cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5544: 0xc0f54c2  jal         func_3D5308
    ctx->pc = 0x3D5544u;
    SET_GPR_U32(ctx, 31, 0x3D554Cu);
    ctx->pc = 0x3D5548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5544u;
    // 0x3d5548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5308u, 0x3D5544u, 0x3D554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D554Cu;
label_3d554c:
    // 0x3d554c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d554cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5550: 0x1620ffad  bnez        $s1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3D5550u;
    {
        const bool branch_taken_0x3d5550 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5550u;
        // 0x3d5554: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5550) {
            ctx->pc = 0x3D5408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5408;
        }
    }
    ctx->pc = 0x3D5558u;
label_3d5558:
    // 0x3d5558: 0x8fa505f8  lw          $a1, 0x5F8($sp)
    ctx->pc = 0x3d5558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
    // 0x3d555c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D555Cu;
    {
        const bool branch_taken_0x3d555c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D555Cu;
        // 0x3d5560: 0x8fa605f4  lw          $a2, 0x5F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d555c) {
            ctx->pc = 0x3D557Cu;
            goto label_3d557c;
        }
    }
    ctx->pc = 0x3D5564u;
    // 0x3d5564: 0x27b102f0  addiu       $s1, $sp, 0x2F0
    ctx->pc = 0x3d5564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x3d5568: 0x8fb505ec  lw          $s5, 0x5EC($sp)
    ctx->pc = 0x3d5568u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1516)));
    // 0x3d556c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D556Cu;
    {
        const bool branch_taken_0x3d556c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D556Cu;
        // 0x3d5570: 0x8fb005f0  lw          $s0, 0x5F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d556c) {
            ctx->pc = 0x3D557Cu;
            goto label_3d557c;
        }
    }
    ctx->pc = 0x3D5574u;
    // 0x3d5574: 0xc0f54e6  jal         func_3D5398
    ctx->pc = 0x3D5574u;
    SET_GPR_U32(ctx, 31, 0x3D557Cu);
    ctx->pc = 0x3D5398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5398u, 0x3D5574u, 0x3D557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D557Cu;
label_3d557c:
    // 0x3d557c: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D557Cu;
    {
        const bool branch_taken_0x3d557c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d557c) {
            ctx->pc = 0x3D5580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D557Cu;
            // 0x3d5580: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5590u;
            goto label_3d5590;
        }
    }
    ctx->pc = 0x3D5584u;
    // 0x3d5584: 0xc0f52ce  jal         func_3D4B38
    ctx->pc = 0x3D5584u;
    SET_GPR_U32(ctx, 31, 0x3D558Cu);
    ctx->pc = 0x3D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B38u, 0x3D5584u, 0x3D558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D558Cu;
label_3d558c:
    // 0x3d558c: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x3d558cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_3d5590:
    // 0x3d5590: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x3d5590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x3d5594: 0x16070003  bne         $s0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5594u;
    {
        const bool branch_taken_0x3d5594 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x3D5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5594u;
        // 0x3d5598: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5594) {
            ctx->pc = 0x3D55A4u;
            goto label_3d55a4;
        }
    }
    ctx->pc = 0x3D559Cu;
    // 0x3d559c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3D559Cu;
    {
        const bool branch_taken_0x3d559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D559Cu;
        // 0x3d55a0: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d559c) {
            ctx->pc = 0x3D5694u;
            goto label_3d5694;
        }
    }
    ctx->pc = 0x3D55A4u;
label_3d55a4:
    // 0x3d55a4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3d55a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d55a8: 0x8fb005e8  lw          $s0, 0x5E8($sp)
    ctx->pc = 0x3d55a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x3d55ac: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x3d55acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d55b0: 0x27c402e0  addiu       $a0, $fp, 0x2E0
    ctx->pc = 0x3d55b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 736));
label_3d55b4:
    // 0x3d55b4: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x3d55b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d55b8: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x3d55b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3d55bc: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x3d55bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3d55c0: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x3d55c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3d55c4: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x3d55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x3d55c8: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x3d55c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x3d55cc: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x3d55ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x3d55d0: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x3d55d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x3d55d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3d55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3d55d8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d55dc: 0x0  nop
    ctx->pc = 0x3d55dcu;
    // NOP
    // 0x3d55e0: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D55E0u;
    {
        const bool branch_taken_0x3d55e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3d55e0) {
            ctx->pc = 0x3D55B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d55b4;
        }
    }
    ctx->pc = 0x3D55E8u;
    // 0x3d55e8: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x3d55e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d55ec: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x3d55ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3d55f0: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x3d55f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x3d55f4: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x3d55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x3d55f8: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x3d55f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x3d55fc: 0x50f60022  beql        $a3, $s6, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D55FCu;
    {
        const bool branch_taken_0x3d55fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x3d55fc) {
            ctx->pc = 0x3D5600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D55FCu;
            // 0x3d5600: 0x9622029a  lhu         $v0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5688u;
            goto label_3d5688;
        }
    }
    ctx->pc = 0x3D5604u;
    // 0x3d5604: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3d5604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d5608:
    // 0x3d5608: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d5608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d560c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d560cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5610: 0xc0f54c2  jal         func_3D5308
    ctx->pc = 0x3D5610u;
    SET_GPR_U32(ctx, 31, 0x3D5618u);
    ctx->pc = 0x3D5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5610u;
    // 0x3d5614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5308u, 0x3D5610u, 0x3D5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5618u;
label_3d5618:
    // 0x3d5618: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3d5618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d561c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d561cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d5620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5624: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x3d5624u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
    // 0x3d5628: 0x2633029c  addiu       $s3, $s1, 0x29C
    ctx->pc = 0x3d5628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x3d562c: 0x0  nop
    ctx->pc = 0x3d562cu;
    // NOP
label_3d5630:
    // 0x3d5630: 0x12040008  beq         $s0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5630u;
    {
        const bool branch_taken_0x3d5630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x3D5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5630u;
        // 0x3d5634: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5630) {
            ctx->pc = 0x3D5654u;
            goto label_3d5654;
        }
    }
    ctx->pc = 0x3D5638u;
    // 0x3d5638: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3d5638u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d563c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D563Cu;
    {
        const bool branch_taken_0x3d563c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D563Cu;
        // 0x3d5640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d563c) {
            ctx->pc = 0x3D5654u;
            goto label_3d5654;
        }
    }
    ctx->pc = 0x3D5644u;
    // 0x3d5644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5648: 0xc0f54a2  jal         func_3D5288
    ctx->pc = 0x3D5648u;
    SET_GPR_U32(ctx, 31, 0x3D5650u);
    ctx->pc = 0x3D564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5648u;
    // 0x3d564c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5288u, 0x3D5648u, 0x3D5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5650u;
label_3d5650:
    // 0x3d5650: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x3d5650u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_3d5654:
    // 0x3d5654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d5654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3d5658: 0x2a02004f  slti        $v0, $s0, 0x4F
    ctx->pc = 0x3d5658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x3d565c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D565Cu;
    {
        const bool branch_taken_0x3d565c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D565Cu;
        // 0x3d5660: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d565c) {
            ctx->pc = 0x3D5630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5630;
        }
    }
    ctx->pc = 0x3D5664u;
    // 0x3d5664: 0xc0f5480  jal         func_3D5200
    ctx->pc = 0x3D5664u;
    SET_GPR_U32(ctx, 31, 0x3D566Cu);
    ctx->pc = 0x3D5668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5664u;
    // 0x3d5668: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5200u, 0x3D5664u, 0x3D566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D566Cu;
label_3d566c:
    // 0x3d566c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3d566cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5670: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d5670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d5674: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d5674u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d5678: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x3d5678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d567c: 0x1616ffe2  bne         $s0, $s6, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3D567Cu;
    {
        const bool branch_taken_0x3d567c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x3D5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D567Cu;
        // 0x3d5680: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d567c) {
            ctx->pc = 0x3D5608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5608;
        }
    }
    ctx->pc = 0x3D5684u;
    // 0x3d5684: 0x9622029a  lhu         $v0, 0x29A($s1)
    ctx->pc = 0x3d5684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_3d5688:
    // 0x3d5688: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3d5688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d568c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3d568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3d5690: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x3d5690u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
label_3d5694:
    // 0x3d5694: 0x8fa805e4  lw          $t0, 0x5E4($sp)
    ctx->pc = 0x3d5694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
    // 0x3d5698: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3d5698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d569c: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x3d569cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x3d56a0: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x3d56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
    // 0x3d56a4: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x3d56a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x3d56a8: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x3d56a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x3d56ac: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x3d56acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x3d56b0: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x3d56b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x3d56b4: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x3d56b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x3d56b8: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x3d56b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x3d56bc: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x3d56bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x3d56c0: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x3d56c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x3d56c4: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x3d56c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x3d56c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D56C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D56C8u;
        // 0x3d56cc: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D56C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D56D0u;
}
