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

// Function: sub_003243B8
// Address: 0x3243b8 - 0x324630
void sub_003243B8_0x3243b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003243B8_0x3243b8");
#endif

    switch (ctx->pc) {
        case 0x32441cu: goto label_32441c;
        case 0x324498u: goto label_324498;
        case 0x3244b8u: goto label_3244b8;
        case 0x3244f0u: goto label_3244f0;
        case 0x32453cu: goto label_32453c;
        case 0x324564u: goto label_324564;
        case 0x32457cu: goto label_32457c;
        case 0x32458cu: goto label_32458c;
        case 0x3245acu: goto label_3245ac;
        default: break;
    }

    ctx->pc = 0x3243b8u;

    // 0x3243b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3243b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3243bc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3243bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3243c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3243c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3243c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3243c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3243c8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3243c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x3243cc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3243ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3243d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3243d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3243d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3243d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3243d8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x3243d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x3243dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3243dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3243e0: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x3243e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x3243e4: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x3243e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x3243e8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x3243e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x3243ec: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x3243ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x3243f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3243f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3243f4: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x3243f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x3243f8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3243f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3243fc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3243FCu;
    {
        const bool branch_taken_0x3243fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243FCu;
        // 0x324400: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3243fc) {
            ctx->pc = 0x324458u;
            goto label_324458;
        }
    }
    ctx->pc = 0x324404u;
    // 0x324404: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x324404u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x324408: 0x8e02be14  lw          $v0, -0x41EC($s0)
    ctx->pc = 0x324408u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBE14u));
    // 0x32440c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x32440Cu;
    {
        const bool branch_taken_0x32440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32440Cu;
        // 0x324410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32440c) {
            ctx->pc = 0x324600u;
            goto label_324600;
        }
    }
    ctx->pc = 0x324414u;
    // 0x324414: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324414u;
    SET_GPR_U32(ctx, 31, 0x32441Cu);
    ctx->pc = 0x324418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324414u;
    // 0x324418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324414u, 0x32441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32441Cu;
label_32441c:
    // 0x32441c: 0x8e10be14  lw          $s0, -0x41EC($s0)
    ctx->pc = 0x32441cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950420)));
    // 0x324420: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x324420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x324424: 0x2442d768  addiu       $v0, $v0, -0x2898
    ctx->pc = 0x324424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956904));
    // 0x324428: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x324428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x32442c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x32442cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x324430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x324430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x324434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324438: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x324438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x32443c: 0x1080006f  beqz        $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x32443Cu;
    {
        const bool branch_taken_0x32443c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x324440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32443Cu;
        // 0x324440: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32443c) {
            ctx->pc = 0x3245FCu;
            goto label_3245fc;
        }
    }
    ctx->pc = 0x324444u;
    // 0x324444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324448: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x324448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x32444c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x32444cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x324450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324450u;
    {
        const bool branch_taken_0x324450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324450u;
        // 0x324454: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324450) {
            ctx->pc = 0x324460u;
            goto label_324460;
        }
    }
    ctx->pc = 0x324458u;
label_324458:
    // 0x324458: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x324458u;
    {
        const bool branch_taken_0x324458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324458u;
        // 0x32445c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324458) {
            ctx->pc = 0x324600u;
            goto label_324600;
        }
    }
    ctx->pc = 0x324460u;
label_324460:
    // 0x324460: 0x8c64bb70  lw          $a0, -0x4490($v1)
    ctx->pc = 0x324460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949744)));
    // 0x324464: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x324464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x324468: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x324468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x32446c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32446cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324470: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x324470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x324474: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x324474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x324478: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x324478u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32447c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324480: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x324480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x324484: 0x62f00a  movz        $fp, $v1, $v0
    ctx->pc = 0x324484u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x324488: 0x13c0005d  beqz        $fp, . + 4 + (0x5D << 2)
    ctx->pc = 0x324488u;
    {
        const bool branch_taken_0x324488 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x32448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324488u;
        // 0x32448c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324488) {
            ctx->pc = 0x324600u;
            goto label_324600;
        }
    }
    ctx->pc = 0x324490u;
    // 0x324490: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x324490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x324494: 0x0  nop
    ctx->pc = 0x324494u;
    // NOP
label_324498:
    // 0x324498: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x324498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32449c: 0x54430055  bnel        $v0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x32449Cu;
    {
        const bool branch_taken_0x32449c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32449c) {
            ctx->pc = 0x3244A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32449Cu;
            // 0x3244a0: 0x8fde0004  lw          $fp, 0x4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3245F4u;
            goto label_3245f4;
        }
    }
    ctx->pc = 0x3244A4u;
    // 0x3244a4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x3244a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x3244a8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3244a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244ac: 0xa7a20010  sh          $v0, 0x10($sp)
    ctx->pc = 0x3244acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x3244b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3244b4: 0x0  nop
    ctx->pc = 0x3244b4u;
    // NOP
label_3244b8:
    // 0x3244b8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3244b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3244bc: 0x2e21004  sllv        $v0, $v0, $s7
    ctx->pc = 0x3244bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 23) & 0x1F));
    // 0x3244c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3244c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3244c4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3244C4u;
    {
        const bool branch_taken_0x3244c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244C4u;
        // 0x3244c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244c4) {
            ctx->pc = 0x3245E0u;
            goto label_3245e0;
        }
    }
    ctx->pc = 0x3244CCu;
    // 0x3244cc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3244ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3244d0: 0x9443be18  lhu         $v1, -0x41E8($v0)
    ctx->pc = 0x3244d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950424)));
    // 0x3244d4: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3244D4u;
    {
        const bool branch_taken_0x3244d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244D4u;
        // 0x3244d8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244d4) {
            ctx->pc = 0x3245D8u;
            goto label_3245d8;
        }
    }
    ctx->pc = 0x3244DCu;
    // 0x3244dc: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3244dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3244e0: 0x244249e0  addiu       $v0, $v0, 0x49E0
    ctx->pc = 0x3244e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18912));
    // 0x3244e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3244e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244e8: 0x24540050  addiu       $s4, $v0, 0x50
    ctx->pc = 0x3244e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x3244ec: 0x0  nop
    ctx->pc = 0x3244ecu;
    // NOP
label_3244f0:
    // 0x3244f0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3244f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3244f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3244f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3244f8: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3244F8u;
    {
        const bool branch_taken_0x3244f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3244FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244F8u;
        // 0x3244fc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244f8) {
            ctx->pc = 0x3245B8u;
            goto label_3245b8;
        }
    }
    ctx->pc = 0x324500u;
    // 0x324500: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x324500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x324504: 0x1457002d  bne         $v0, $s7, . + 4 + (0x2D << 2)
    ctx->pc = 0x324504u;
    {
        const bool branch_taken_0x324504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x324508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324504u;
        // 0x324508: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324504) {
            ctx->pc = 0x3245BCu;
            goto label_3245bc;
        }
    }
    ctx->pc = 0x32450Cu;
    // 0x32450c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x32450cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x324510: 0x27b30014  addiu       $s3, $sp, 0x14
    ctx->pc = 0x324510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x324514: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x324514u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32451c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x32451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x324520: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x324520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x324524: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x324524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x324528: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x324528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32452c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x32452cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324530: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x324530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x324534: 0xc077044  jal         func_1DC110
    ctx->pc = 0x324534u;
    SET_GPR_U32(ctx, 31, 0x32453Cu);
    ctx->pc = 0x324538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324534u;
    // 0x324538: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC110u, 0x324534u, 0x32453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32453Cu;
label_32453c:
    // 0x32453c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x32453Cu;
    {
        const bool branch_taken_0x32453c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32453Cu;
        // 0x324540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32453c) {
            ctx->pc = 0x324600u;
            goto label_324600;
        }
    }
    ctx->pc = 0x324544u;
    // 0x324544: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x324544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x324548: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x324548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x32454c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x32454cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x324550: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x324550u;
    {
        const bool branch_taken_0x324550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324550u;
        // 0x324554: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324550) {
            ctx->pc = 0x3245B8u;
            goto label_3245b8;
        }
    }
    ctx->pc = 0x324558u;
    // 0x324558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32455c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x32455Cu;
    SET_GPR_U32(ctx, 31, 0x324564u);
    ctx->pc = 0x324560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32455Cu;
    // 0x324560: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x32455Cu, 0x324564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324564u;
label_324564:
    // 0x324564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324568: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x324568u;
    {
        const bool branch_taken_0x324568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324568u;
        // 0x32456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324568) {
            ctx->pc = 0x3245B4u;
            goto label_3245b4;
        }
    }
    ctx->pc = 0x324570u;
    // 0x324570: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x324570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x324574: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x324574u;
    SET_GPR_U32(ctx, 31, 0x32457Cu);
    ctx->pc = 0x324578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324574u;
    // 0x324578: 0x24510120  addiu       $s1, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x324574u, 0x32457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32457Cu;
label_32457c:
    // 0x32457c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32457Cu;
    {
        const bool branch_taken_0x32457c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32457c) {
            ctx->pc = 0x324580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32457Cu;
            // 0x324580: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324590u;
            goto label_324590;
        }
    }
    ctx->pc = 0x324584u;
    // 0x324584: 0xc0c4900  jal         func_312400
    ctx->pc = 0x324584u;
    SET_GPR_U32(ctx, 31, 0x32458Cu);
    ctx->pc = 0x324588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324584u;
    // 0x324588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x324584u, 0x32458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32458Cu;
label_32458c:
    // 0x32458c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x32458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_324590:
    // 0x324590: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x324590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324594: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x324594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x324598: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x324598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32459c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x32459cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3245a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3245a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245a4: 0xc077044  jal         func_1DC110
    ctx->pc = 0x3245A4u;
    SET_GPR_U32(ctx, 31, 0x3245ACu);
    ctx->pc = 0x3245A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3245A4u;
    // 0x3245a8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC110u, 0x3245A4u, 0x3245ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3245ACu;
label_3245ac:
    // 0x3245ac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3245ACu;
    {
        const bool branch_taken_0x3245ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3245B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245ACu;
        // 0x3245b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245ac) {
            ctx->pc = 0x324600u;
            goto label_324600;
        }
    }
    ctx->pc = 0x3245B4u;
label_3245b4:
    // 0x3245b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3245b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3245b8:
    // 0x3245b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3245b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_3245bc:
    // 0x3245bc: 0x9482be18  lhu         $v0, -0x41E8($a0)
    ctx->pc = 0x3245bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294950424)));
    // 0x3245c0: 0x269400f0  addiu       $s4, $s4, 0xF0
    ctx->pc = 0x3245c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
    // 0x3245c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3245c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3245c8: 0x26b500f0  addiu       $s5, $s5, 0xF0
    ctx->pc = 0x3245c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x3245cc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3245ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3245d0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x3245D0u;
    {
        const bool branch_taken_0x3245d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3245D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245D0u;
        // 0x3245d4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245d0) {
            ctx->pc = 0x3244F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3244f0;
        }
    }
    ctx->pc = 0x3245D8u;
label_3245d8:
    // 0x3245d8: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x3245D8u;
    {
        const bool branch_taken_0x3245d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3245DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245D8u;
        // 0x3245dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245d8) {
            ctx->pc = 0x324600u;
            goto label_324600;
        }
    }
    ctx->pc = 0x3245E0u;
label_3245e0:
    // 0x3245e0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3245e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3245e4: 0x2ae20020  slti        $v0, $s7, 0x20
    ctx->pc = 0x3245e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3245e8: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3245E8u;
    {
        const bool branch_taken_0x3245e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3245ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245E8u;
        // 0x3245ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245e8) {
            ctx->pc = 0x3244B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3244b8;
        }
    }
    ctx->pc = 0x3245F0u;
    // 0x3245f0: 0x8fde0004  lw          $fp, 0x4($fp)
    ctx->pc = 0x3245f0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3245f4:
    // 0x3245f4: 0x57c0ffa8  bnel        $fp, $zero, . + 4 + (-0x58 << 2)
    ctx->pc = 0x3245F4u;
    {
        const bool branch_taken_0x3245f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x3245f4) {
            ctx->pc = 0x3245F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3245F4u;
            // 0x3245f8: 0x97c2000c  lhu         $v0, 0xC($fp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324498;
        }
    }
    ctx->pc = 0x3245FCu;
label_3245fc:
    // 0x3245fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3245fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324600:
    // 0x324600: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x324600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324604: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x324604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x324608: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x324608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32460c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x32460cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x324610: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x324610u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324614: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x324614u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x324618: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x324618u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32461c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x32461cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324620: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x324620u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324624: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x324624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x324628: 0x3e00008  jr          $ra
    ctx->pc = 0x324628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324628u;
        // 0x32462c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324630u;
}
